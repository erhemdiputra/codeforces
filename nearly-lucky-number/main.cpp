#include<bits/stdc++.h>

using namespace std;

int main() {
    char num[50];
    int counter = 0;
    cin>>num;

    for (int i = 0; i < strlen(num); i++) {
        if (num[i] == '4' || num[i] == '7') {
            counter++;
        }
    }

    if (counter == 4 || counter == 7) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<endl;
}