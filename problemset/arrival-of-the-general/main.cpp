#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, A[150], B[150], maxVal, minVal, maxPos, minPos, minSwap;
    cin>>n;

    maxVal = INT_MIN;
    minVal = INT_MAX;

    for(int i = 0; i < n; i++) {
        cin>>A[i];
        B[i] = A[i];

        maxVal = max(maxVal, A[i]);
        minVal = min(minVal, A[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(B[i] == maxVal) {
            maxPos = i;
            break; 
        }
    }

    for(int i = n -1; i >= 0; i--) {
        if(B[i] == minVal) {
            minPos = i;
            break;
        }
    }

    if(maxPos > minPos) {
        minSwap = (maxPos - 1) + ((n - 1) - minPos);
    } else {
        minSwap = maxPos + ((n - 1) - minPos);
    }

    cout<<minSwap<<endl;
}