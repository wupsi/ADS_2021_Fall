#include <iostream>
using namespace std;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main(){

    long long n, m, i = 1, val; cin >> n >> m;

    while(true){
        val = max(n, m) * i;
        if(val % min(n, m) == 0){ 
            cout << val;
            return 0;
        }
        i++;
    }
}