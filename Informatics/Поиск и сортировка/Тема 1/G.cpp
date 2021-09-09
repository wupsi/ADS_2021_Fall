#include <iostream>
using namespace std;

int main(){
    int n, minx = 0, miny = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
        if(arr[i] < arr[minx]) minx = i;
    }

    for(int i = 1; i < n; i++) if(arr[i] < arr[miny] and i != minx) miny = i;
    cout << arr[minx] << " " << arr[miny];
}