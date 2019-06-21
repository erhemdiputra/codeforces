#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double l, arr[1050], maxDistLantern, dist, x, y;
    cin>>n>>l;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    maxDistLantern = -999999999999999;
    for(int i = 0; i < n - 1; i++) {
        dist = (double) (arr[i+1] - arr[i]) / 2.0;
        maxDistLantern = max(maxDistLantern, dist);
    }

    x = arr[0] - 0;
    y = l - arr[n-1];

    maxDistLantern = max(maxDistLantern, x);
    maxDistLantern = max(maxDistLantern, y);
    
    // printf("%.10f\n", maxDistLantern);
    cout<<fixed<<setprecision(10)<<maxDistLantern<<endl;
}