#include<bits/stdc++.h>

using namespace std;

int main() {
    // 4 7
    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 747, 774, 744};
    int n, len;
    bool isLuckyVal = false;

    cin>>n;

    len = sizeof(luckyNumbers)/sizeof(luckyNumbers[0]);

    for (int i = 0; i < len; i++) {
        if (n % luckyNumbers[i] == 0) {
            isLuckyVal = true;
            break;
        }
    }
    
    if (isLuckyVal) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    cout<<endl;
}