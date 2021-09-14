#include <iostream>
using namespace std;

struct deque{
    int q[100000];
    int start, endd;

    deque(){
        start = 50000;
        endd = 50000;
    }
    
    bool error(){
        return endd - start <= 0;
    }

    void push_front(int n){
        q[start] = n;
        start--;
    }

    void push_back(int n){
        q[endd + 1] = n;
        endd++;
    }

    int pop_front(){
        start++;
        return q[start];
    }

    int pop_back(){
        endd--;
        return q[endd + 1];
    }

    int front(){
        return q[start + 1];
    }

    int back(){
        return q[endd];
    }

    int size(){
        return endd - start;
    }

    void clear(){
        start = 50000;
        endd = 50000;
    }
};

int main(){
    
    string s;
    deque dq;
    int n;
    
    while(true){

        cin >> s;
        
        if(s == "push_front"){
            cin >> n;
            dq.push_front(n);
            cout << "ok\n";
        }

        if(s == "push_back"){
            cin >> n;
            dq.push_back(n);
            cout << "ok\n";
        }

        if(s == "pop_front"){
            if(dq.error()) cout << "error\n";
            else cout << dq.pop_front() << endl;
        }

        if(s == "pop_back"){
            if(dq.error()) cout << "error\n";
            else cout << dq.pop_back() << endl;
        }

        if(s == "front"){
            if(dq.error()) cout << "error\n";
            else cout << dq.front() << endl;
        }

        if(s == "back"){
            if(dq.error()) cout << "error\n";
            else cout << dq.back() << endl;
        }

        if(s == "size"){
            cout << dq.size() << endl;
        }

        if(s == "clear"){
            dq.clear();
            cout << "ok\n";
        }

        if(s == "exit"){
            cout << "bye";
            return 0;
        }
    }   
}