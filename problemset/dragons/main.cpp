#include<bits/stdc++.h>

using namespace std;

struct Dragon {
    int strength;
    int bonus;
};

bool compareTwoDragons(Dragon a, Dragon b) {
    return a.strength < b.strength;
}

int main() {
    int s, n, strength, bonus;
    Dragon arr[1050];
    bool isPass = true;
    cin>>s>>n;

    for(int i = 0; i < n; i++) {
        cin>>strength>>bonus;
        arr[i].strength = strength;
        arr[i].bonus = bonus;
    }

    sort(arr, arr+n, compareTwoDragons);

    for(int i = 0; i < n; i++) {
        if(s > arr[i].strength) {
            s += arr[i].bonus;
        } else {
            isPass = false;
            break;
        }
    }

    if(isPass) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

