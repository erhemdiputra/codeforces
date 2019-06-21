#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, c, counter, sum;
    cin>>n;

    counter = 0;
    sum = 0;
    
    for (int i = 1; i <= n; i++) {
        cin>>a>>b>>c;

        sum = a + b + c;
        if (sum >= 2) {
            counter++;
        }
    }

    cout<<counter<<endl;
}