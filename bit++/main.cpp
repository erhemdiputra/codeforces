#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, result;
    cin>>n;

    result = 0;
    for (int i = 1; i <= n; i++) {
        string str;
        cin>>str;

        if (str.compare("X++") == 0 || str.compare("++X") == 0) {
            result++;
        } else {
            result--;
        }
    }

    cout<<result<<endl;
}