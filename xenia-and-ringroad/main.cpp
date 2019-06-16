#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, val, currPos, totalSteps;
    cin>>n>>m;

    currPos = 1;
    totalSteps = 0;

    for(int i = 0; i < m; i++)  {
        cin>>val;
        if(val < currPos) {
            totalSteps += (n - currPos) + val;
        } else {
            totalSteps += val - currPos;
        }
        currPos = val;
    }

    cout<<totalSteps<<endl;
}