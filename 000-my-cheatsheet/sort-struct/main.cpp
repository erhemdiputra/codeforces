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
    int n, strength, bonus;
    Dragon arr[1050];
    bool isPass = true;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>strength>>bonus;
        arr[i].strength = strength;
        arr[i].bonus = bonus;
    }

    sort(arr, arr+n, compareTwoDragons);

    for(int i = 0; i < n; i++) {
        cout<<arr[i].strength<<" "<<arr[i].bonus<<endl;
    }
}

// 10
// 20 1
// 4 3
// 5 1
// 100 1
// 4 2
// 101 1
// 10 0
// 10 2
// 17 3
// 12 84
