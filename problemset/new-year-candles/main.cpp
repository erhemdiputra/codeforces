#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, hours, counter, result;
    cin>>a>>b;

    hours = 0;
    counter = 1;
    while(a > 0) {
        hours++;
        if(counter % b == 0) {
            a++;
        }

        counter++;
        a--;
    }

    cout<<hours<<endl;
}