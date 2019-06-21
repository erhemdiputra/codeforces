#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, val;
    vector<int> v;

    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>val;   
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    for(auto val: v) {
        cout<<val<<" ";
    }
    cout<<endl;
}