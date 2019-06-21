#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        char str[150];
        cin>>str;
        
        int len = strlen(str);
        if (len > 10) {
            cout<<str[0]<<len-2<<str[len-1];
        } else {
            cout<<str;
        }
        cout<<endl;
    }
}