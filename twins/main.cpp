#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, sum1, arr[105], sum2, minCoin;
    cin>>n;

    sum1 = 0;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        sum1 += arr[i];
    }

    sort(arr, arr+n, greater<int>());

    sum2 = 0;
    minCoin = 0;

    for(int i = 0; i < n; i++) {
        sum2 += arr[i];
        sum1 -= arr[i];
        minCoin++;

        if (sum2 > sum1) {
            break;
        }
    }

    cout<<minCoin<<endl;
    return 0;
}