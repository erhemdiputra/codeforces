#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    float val, sum, res;
    cin>>n;

    for(int i = 0; i < n; i++) {
        cin>>val;
        sum += val;
    }

    res = sum / n;
    printf("%.12f\n", res);
}