#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;
    long long int n, counter;
    cin>>q;

    while(q--) {
        cin>>n;
        counter = 0;
        while(n > 1) {
            if(n % 2 == 0) {
                n /= 2;
            } else if(n % 3 == 0) {
                n = 2 * n / 3;
            } else if(n % 5 == 0) {
                n = 4 * n / 5;
            } else {
                break;
            }

            counter++;
        }

        if(n == 1) {
            cout<<counter<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
}