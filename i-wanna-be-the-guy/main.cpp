#include<bits/stdc++.h>

using namespace std;

bool checkLvl(int arr[], int n) {
    for(int i = 1; i <= n; i++) {
        if(arr[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, p, q, lvl, arr[105];
    bool isPass;
    memset(arr, 0, sizeof(arr));

    cin>>n;

    cin>>p;
    for(int i = 0; i < p; i++) {
        cin>>lvl;
        arr[lvl]++;
    }

    cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>lvl;
        arr[lvl]++;
    }

    if(checkLvl(arr, n)) {
        cout<<"I become the guy."<<endl;
    } else {
        cout<<"Oh, my keyboard!"<<endl;
    }

}