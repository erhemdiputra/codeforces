#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, arr[105], mod[2], oneCounter, zeroCounter, remainder;
    cin>>n;

    oneCounter = 0;
    zeroCounter = 0;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];

        remainder = arr[i] % 2;
        if(remainder == 0) {
            zeroCounter++;
        } else {
            oneCounter++;
        }

        mod[remainder] = i+1;
    }

    if(zeroCounter == 1) {
        cout<<mod[0]<<endl;
    } else if(oneCounter == 1) {
        cout<<mod[1]<<endl;
    }
}