#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, arr[100050];
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int i, j, taxi;
    i = 0;
    j = n - 1;
    taxi = 0;

    while(i != j) {
        if (arr[i] + arr[j] <= 4) {
            arr[j] += arr[i];
            i++;
        } else {
            taxi++;
            j--;
        }
    }

    cout<<taxi+1<<endl;
}