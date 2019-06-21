#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int upperCounter, lowerCounter;
    cin>>str;

    upperCounter = 0;
    lowerCounter = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            upperCounter++;
        } else if (str[i] >= 97 && str[i] <= 122) {
            lowerCounter++;
        }
    }

    if(upperCounter > lowerCounter) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout<<str<<endl;
}