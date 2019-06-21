#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, arr[105], val;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        cin>>val;
        arr[val] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}