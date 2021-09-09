#include <iostream>
using namespace std;
#define null 1e9

int start = 0, endd = 0;
long long n;
int q[100000];

bool error(){
    return endd - start <= 0;
}

void push(){
    cin >> n;
    q[endd] = n;
    endd++;
    cout << "ok\n";
}

void pop(){
    if(error()) cout << "error\n";
    else{
        cout << q[start] << endl;
        start++;
    }
}

void front(){
    if(error()) cout << "error\n";
    else cout << q[start] << endl;
}

void size(){
    cout << endd - start << endl;
}

void clear(){
    for(int i = start; i <= endd; i++)
        q[i] = null;

    start = 0;
    endd = 0;

    cout << "ok\n"; 
}

void arr(){
    for(int i = start; i <= endd; i++) cout << q[i] << " ";
}

int main(){
    
    string s;
    
    while(true){

        cin >> s;

        if(s == "exit") {
            cout << "bye";
            return 0;
            }
        
        if(s == "push") push();
        
        if(s == "size") size();
        
        if(s == "pop") pop();
        
        if(s == "front") front();
        
        if(s == "clear") clear();

        if(s == "arr") arr();

    }   
}