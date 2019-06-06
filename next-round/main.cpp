#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, counter = 0;
    int arr[100];
    cin>>n>>k;

    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] > 0  && arr[i] >= arr[k]) {
            counter++;
        }
    }

    cout<<counter<<endl;
}