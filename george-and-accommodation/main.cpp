#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, p, q, diff, counter;
    cin>>n;

    counter = 0;
    for(int i = 0; i < n; i++) {
        cin>>p>>q;
        diff = q - p;
        if (diff >= 2) {
            counter++;
        }
    }

    cout<<counter<<endl;
}