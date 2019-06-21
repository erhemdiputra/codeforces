#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, h, personHeight, totalWidth;
    cin>>n>>h;

    totalWidth = 0;
    for(int i = 0; i < n; i++) {
        cin>>personHeight;
        if(personHeight > h) {
            totalWidth += 2;
        } else {
            totalWidth += 1;
        }
    }

    cout<<totalWidth<<endl;
}