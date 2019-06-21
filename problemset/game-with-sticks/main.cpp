#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, minVal;
    cin>>n>>m;

    minVal = min(n, m);
    if (minVal % 2 == 0) {
        cout<<"Malvika"<<endl;
    } else {
        cout<<"Akshat"<<endl;
    }
}