#include<bits/stdc++.h>

using namespace std;

int main() {
    string berlandStr, birlandStr;
    cin>>berlandStr>>birlandStr;

    reverse(berlandStr.begin(), berlandStr.end());

    int result = berlandStr.compare(birlandStr);
    if (result == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<endl;
}