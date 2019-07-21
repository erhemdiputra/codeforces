#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, n, val;
    cin>>t;

    for(int i = 0; i < t; i++) {
        cin>>n;

        int arr[5];
        memset(arr, 0, sizeof(arr));

        for(int j = 0; j < n; j++) {
            cin>>val;
            arr[val%3]++;
        }

        int ans = arr[0];
        int numPair = min(arr[1], arr[2]);
        ans += numPair;
        arr[1] -= numPair;
        arr[2] -= numPair;
        ans += arr[1]/3 + arr[2]/3;
        cout<<ans<<endl; 
    }
}