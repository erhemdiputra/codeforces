#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, days;
    cin>>n>>m;

    days = 0;
    while(n > 0) {
        days++;
        if(days % m == 0) {
            n += 1;
        }
        n -= 1;
    }

    cout<<days<<endl;
}