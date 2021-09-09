#include <iostream>
using namespace std;

char st[100000];
long long pos = 0;

char closed(char c){
	if(c == ')') return '(';
	if(c == ']') return '[';
	return '{';
}

int main(){

	string s; cin >> s;
	
    for(long unsigned int i = 0; i < s.length(); i++){
		
        if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
			st[pos] = s[i];
            pos++;
		} 
        else{
            if(st[pos - 1] == closed(s[i])){
				pos--;
			} 
            
            else{
				cout << "no";
				return 0;
			}
		}
	}

    cout << (pos == 0 ? "yes" : "no");

	return 0;
}