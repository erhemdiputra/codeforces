#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 4, val;
    map<int, bool> mapShoe;

    for(int i = 0; i < n; i++) {
        cin>>val;
        if(!mapShoe[val]) {
            mapShoe[val] = true;
        }
    }

    cout<<n-mapShoe.size()<<endl;
}