#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char list[] = {'H', 'Q', '9'};
    int lenList;
    bool found = false;

    cin>>str;

    lenList = sizeof(list)/sizeof(list[0]);

    for(int i = 0; i < str.size(); i++) {
        for(int j = 0; j < lenList; j++) {
            if(str[i] == list[j]) {
                found = true;
                break;
            }
        }
    }

    if(found) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<endl;
}