#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n;
    int arr[n];
    int l = 0, r = n - 1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int k; cin >> k;

    while(l < r){
        m = (l + r) / 2;
        if(arr[m] < k) l = m + 1;
        else r = m;
    }
    if (arr[r] == k) printf("%d", r);
    else printf("-1");
}