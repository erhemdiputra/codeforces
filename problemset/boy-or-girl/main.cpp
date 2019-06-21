#include<bits/stdc++.h>

using namespace std;

int main() {
    map<char, int> maps;
    string str;
    cin>>str;

    for(int i = 0; i < str.size(); i++) {
        maps[str[i]]++;
    }

    if (maps.size() % 2 == 0) {
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }

    cout<<endl;
}

// map<char, int>::iterator it;
// for (it = maps.begin(); it != maps.end(); it++) {
//     cout<<it->first<<" "<<it->second<<endl;
// }