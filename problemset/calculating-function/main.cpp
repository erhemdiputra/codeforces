#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, result;
    cin>>n;

    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -1 * (n / 2 + 1);
    }

    cout<<result<<endl;
}