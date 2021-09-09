#include <iostream>
using namespace std;
#define null 1e9

int cnt = 0;
long long n;
int st[100000];

bool error(){
    return cnt - 1 < 0;
}

void push(){
    cin >> n;
    st[cnt] = n;
    cnt++;
    cout << "ok\n";
}

void pop(){
    if(error()) cout << "error\n";
    else{
        cout << st[cnt - 1] << endl;
        st[cnt - 1] = null;
        cnt--;
    }
}

void back(){
    if(error()) cout << "error\n";
    else cout << st[cnt - 1] << endl;
}

void size(){
    cout << cnt << endl;
}

void clear(){
    for(int i = 0; i < cnt; i++)
        st[i] = null;
    
    cnt = 0;
    
    cout << "ok\n"; 
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
        
        if(s == "back") back();
        
        if(s == "clear") clear();

    }   
}