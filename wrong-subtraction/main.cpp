#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, lastDigit;
    cin>>n>>k;

    for(int i = 0; i < k; i++) {
        lastDigit = n % 10;
        if(lastDigit != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    cout<<n<<endl;
}