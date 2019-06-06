#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, counter, maxVal;
    cin>>n;

    counter = 0;
    maxVal = INT_MIN;

    for(int i = 1; i <= n; i++) {
        cin>>a>>b;
        counter -= a;
        counter += b;
        maxVal = max(maxVal, counter); 
    }

    cout<<maxVal<<endl;
}