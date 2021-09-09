#include <iostream>
using namespace std;
#define min(a, b) (a < b ? a : b)

long long gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){

    long long n, m; cin >> n >> m;

    cout << gcd(n, m);

    // if((n + m) % 2 == 0){
    //     for(long long i = min(n, m); i > 1; i-= 2){
    //         if(n % i == 0 and m % i == 0){
    //             cout << i;
    //             return 0;
    //         }
    //     }
    // } 
    // else{
    //     for(long long i = min(n, m); i >= 1; i-= 2){
    //         if(n % i == 0 and m % i == 0){
    //             cout << i;
    //             return 0;
    //         }
    //     }
    // }
    return 0;
}