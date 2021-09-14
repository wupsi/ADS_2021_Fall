#include <iostream>
using namespace std;

struct queue{
    int q[100000];
    int start, endd;

    queue(){
        start = 0;
        endd = 0;
    }

    bool error(){
        return endd - start <= 0;
    }

    void push(int n){
        q[endd] = n;
        endd++;
    }

    int pop(){
        start++;
        return q[start - 1];
    }

    int front(){
        return q[start];
    }

    int size(){
        return endd - start;
    }

    void clear(){
        start = 0;
        endd = 0;
    }
};

int main(){
    
    string s;
    queue q;
    int n;
    
    while(true){

        cin >> s;

        if(s == "exit") {
            cout << "bye";
            return 0;
            }
        
        if(s == "push"){
            cin >> n;
            q.push(n);
            cout << "ok\n";
        }
        
        if(s == "size") 
            cout << q.size() << endl;
        
        if(s == "pop"){
            if(q.error()) cout << "error\n";
            else cout << q.pop() << endl;
        }

        if(s == "front"){
            if(q.error()) cout << "error\n";
            else cout << q.front() << endl;
        }
        
        if(s == "clear"){
            q.clear();
            cout << "ok\n"; 
        }

    }
}