#include <iostream>
#include <queue>
using namespace std;

int main(){

    int x;
    string s;

    queue <pair <int, string> > ten, eleven;

    while(cin >> x >> s){
        
        if(x == 9) cout << x << " " << s << endl;
        else if(x == 10) ten.push(make_pair(x, s));
        else if(x == 11) eleven.push(make_pair(x, s));

    }

    while(!ten.empty()){
        cout << ten.front().first << " " << ten.front().second << endl;
        ten.pop();
    }
    
    while(!eleven.empty()){
        cout << eleven.front().first << " " << eleven.front().second << endl;
        eleven.pop();
    }
}