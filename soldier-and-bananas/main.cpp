#include<bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w, cost, result;
    cin>>k>>n>>w;

    cost = w * (k + w *k) / 2;
    if (cost > n) {
        result = cost - n;
    }
    
    cout<<result<<endl;
}