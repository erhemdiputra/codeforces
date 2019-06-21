#include<bits/stdc++.h>

using namespace std;

int main() {
    int x, result;
    cin>>x;

    if (x <= 5) {
        result = 1;
    } else {
        result = ceil((float) x/5);
    }

    cout<<result<<endl;
}