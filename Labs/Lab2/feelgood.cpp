#include <iostream>
using namespace std;

int main(){

    int n, ans = 0, start = 0, finish = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++){
        int sum = 0, maxsum = 0, mn = i, l = 0, r = 0;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[mn]) mn = j;
            sum += arr[j];
            if(sum * arr[mn] > maxsum){
                maxsum = sum * arr[mn];
                l = i + 1;
                r = j + 1;
            }
            if(maxsum > ans){
                ans = maxsum;
                start = l;
                finish = r;
            }
        }
        cout << l << " " << r << endl;
    }

    cout << endl << start << " " << finish << endl;
}

// 5
// 17 13 15 25 2

// [17]                 17 * 17 = 289
// [17, 13]             30 * 13 = 390
// [17, 13, 15]         45 * 13 = 585
// [17, 13, 15, 25]     70 * 13 = 910[1, 4]
// [17, 13, 15, 25, 2]  72 * 2 = 144
// [13]                 13 * 13 = 169
// [13, 15]             28 * 13 = 364
// [13, 15, 25]         53 * 13 = 689[2, 4]
// [13, 15, 25, 2]      55 * 2 = 110
// [15]                 15 * 15 = 225
// [15, 25]             40 * 15 = 600[3, 4]
// [15, 25, 2]          42 * 2 = 84
// [25]                 25 * 25 = 625[4, 4]
// [25, 2]              27 * 2 = 52
// [2]                  2 * 2 = 4[5, 5]