#include<iostream>
#include<deque>
using namespace std;

int main(){

    string s; getline(cin,s);
    deque<int> dq;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' or s[i] == '-' or s[i] == '*'){
            
            int x = dq.front();
            dq.pop_front();
            int y = dq.front();
            dq.pop_front();

            if(s[i]=='+') dq.push_front(y + x);
            if(s[i]=='-') dq.push_front(y - x);
            if(s[i]=='*') dq.push_front(y * x);

        }

        else if(s[i] != ' ') dq.push_front(int(s[i]) - 48);
    }

    cout << dq.front();
    
    return 0;
}