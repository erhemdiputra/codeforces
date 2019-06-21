#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, arr[100050], maxSequence, sequence, j;
    bool status;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    maxSequence = 1;
    sequence = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i+1] >= arr[i]) {
            sequence++;
        } else {
            maxSequence = max(maxSequence, sequence);
            sequence = 1;
        }
    }

    if (sequence > 0) {
        maxSequence = max(maxSequence, sequence);
    }

    cout<<maxSequence<<endl;
}