#include<bits/stdc++.h>

using namespace std;

int main() {
    char arr[100];
    int n, counter;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    counter = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i+1]) {
            counter++;
        }
    }

    cout<<counter<<endl;
}