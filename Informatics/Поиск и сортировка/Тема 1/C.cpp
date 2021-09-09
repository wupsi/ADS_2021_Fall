#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, comp = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];
    int x; cin >> x;

    for(int i = 1; i < n; i++) if(abs(x - arr[i]) < abs(x - arr[comp])) comp = i;
    cout << arr[comp];
}
