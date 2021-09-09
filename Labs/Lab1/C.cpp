#include <iostream>
using namespace std;
#define null 1e9

int start = 50000, endd = 50000;
long long n;
int q[100000];

bool error(){
    return endd - start <= 0;
}

void push_front(){
    cin >> n;
    q[start] = n;
    start--;
    cout << "ok\n";
}

void push_back(){
    cin >> n;
    q[endd + 1] = n;
    endd++;
    cout << "ok\n";
}

void pop_front(){
    if(error()) cout << "error\n";
    else{
        cout << q[start + 1] << endl;
        start++;
    }
}

void pop_back(){
    if(error()) cout << "error\n";
    else{
        cout << q[endd] << endl;
        endd--;
    }
}

void front(){
    if(error()) cout << "error\n";
    else cout << q[start + 1] << endl;
}

void back(){
    if(error()) cout << "error\n";
    else cout << q[endd] << endl;
}

void size(){
    cout << endd - start << endl;
}

void clear(){
    for(int i = start + 1; i <= endd; i++)
        q[i] = null;
    
    start = 50000;
    endd = 50000;

    cout << "ok\n";
}

void arr(){
    for(int i = start + 1; i <= endd; i++)
        cout << q[i] << " ";
    
}

int main(){
    
    string s;
    
    while(true){

        cin >> s;
        
        if(s == "push_front") push_front();
        
        if(s == "push_back") push_back();

        if(s == "pop_front") pop_front();

        if(s == "pop_back") pop_back();

        if(s == "front") front();

        if(s == "back") back();

        if(s == "size") size();

        if(s == "clear") clear();

        if(s == "exit") {
            cout << "bye";
            return 0;
            }

        if(s == "arr") arr();
    }   
}