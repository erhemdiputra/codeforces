#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<string, int> maps;
    cin>>n;

    while(n--) {
        string str;
        cin>>str;

        if(maps.find(str) == maps.end()) {
            cout<<"OK"<<endl;
            maps[str] = 1;
        } else {
            cout<<str<<maps[str]<<endl;
            maps[str]++;
        }
    }
}