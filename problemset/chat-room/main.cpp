#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    char word[] = {'h', 'e', 'l', 'l', 'o'};
    bool found = false;
    
    cin>>str;

    int j = 0;
    for(int i = 0; i < str.size(); i++) {
        if (str[i] == word[j]) {
            j++;
        }

        if (j == 5) {
            found = true;
            break;
        }
    }

    if (found) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<endl;
}