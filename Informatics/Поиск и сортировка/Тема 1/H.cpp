#include <iostream>
using namespace std;

int main(){
    int x, n; cin >> x >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == x){
                cnt++;
                break;
            }
        }
        cout << (cnt == 1 ? "YES\n" : "NO\n");
    }
            
}