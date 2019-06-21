#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, res1, res2, res3, res4, maxVal;
    cin>>a>>b>>c;

    maxVal = INT_MIN;
    maxVal = max(maxVal, a+b+c);
    maxVal = max(maxVal, (a+b)*c);
    maxVal = max(maxVal, a+(b*c));
    maxVal = max(maxVal, a*b+c);
    maxVal = max(maxVal, a*(b+c));
    maxVal = max(maxVal, a*b*c);

    cout<<maxVal<<endl;
}