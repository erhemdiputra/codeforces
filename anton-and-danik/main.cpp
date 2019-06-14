#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, antonCounter, danikCounter;
    char player;
    string result;

    cin>>n;

    antonCounter = 0;
    danikCounter = 0;

    for(int i = 0; i < n; i++) {
        cin>>player;
        switch (player)
        {
            case 'A':
                antonCounter++;
                break;
            case 'D':
                danikCounter++;
                break;
        }
    }

    if(antonCounter > danikCounter) {
        result = "Anton";
    } else if(danikCounter > antonCounter) {
        result = "Danik";
    } else {
        result = "Friendship";
    }

    cout<<result<<endl;
}