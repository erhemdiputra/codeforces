#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, remainder;
    string res;
    cin>>n;

    res = "";
    for(int i = 1; i <= n; i++) {
        if(i > 1) {
            res.append(" that ");
        }

        remainder = i % 2;
        if(remainder == 0) {
            res.append("I love");
        } else if(remainder == 1) {
            res.append("I hate");
        }

        if (i == n) {
            res.append(" it");
        }
    }

    cout<<res<<endl;
}