#include <iostream>
using namespace std;

struct stack{
    int arr[100000];
    int pos;
    stack(){
        pos = 0;
    }

    bool error(){
        return pos - 1 < 0;
    }

    void push(int n){
        arr[pos] = n;
        pos++;
    }

    int pop(){
        pos--;
        return arr[pos];
    }

    int top(){
        return arr[pos - 1];
    }

    int size(){
        return pos;
    }

    void clear(){
        pos = 0;
    }
};

int main(){

    stack st;

    while(true){
        string act; cin >> act;

        if(act == "push"){
            int n; cin >> n;
            st.push(n);
            cout << "ok\n";
        }

        if(act == "pop"){
            if(st.error()) cout << "error\n";
            else cout << st.pop() << endl;
        }

        if(act == "back"){
            if(st.error()) cout << "error\n";
            else cout << st.top() << endl;
        }

        if(act == "size")
            cout << st.size() << endl;
        
        if(act == "clear"){
            st.clear();
            cout << "ok\n";
        }

        if(act == "exit"){
            cout << "bye";
            break;
        }
    }

    return 0;
}