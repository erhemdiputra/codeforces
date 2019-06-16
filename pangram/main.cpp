#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char c;
    map<char, bool> maps;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>c;
        if(c >= 'a' && c <= 'z') {
            c = c - 32;
        }

        if(!maps[c]) {
            maps[c] = true;
        }
    }

    if(maps.size() == 26) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}