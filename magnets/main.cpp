#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, prevVal, currVal, counter;
    cin>>n;

    prevVal = 0;
    counter = 0;

    for(int i = 1; i <= n; i++) {
        cin>>currVal;
        if (prevVal != currVal) {
            counter++;
        }
        prevVal = currVal;
    }

    cout<<counter<<endl;
}