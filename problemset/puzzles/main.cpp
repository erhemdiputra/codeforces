#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, minVal, val;
    cin>>n>>m;

    vector<int> v(m);
    for(int i = 0; i < m; i++) {
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    minVal = INT_MAX;
    for(int i = n - 1; i < m; i++) {
        val = v[i] - v[i - (n - 1)];
        minVal = min(minVal, val);
    }

    cout<<minVal<<endl;
}