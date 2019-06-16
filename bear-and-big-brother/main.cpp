#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, year;
    cin>>a>>b;

    year = 0;

    while(a <= b) {
        year++;
        a *= 3;
        b *= 2;
    }

    cout<<year<<endl;
}