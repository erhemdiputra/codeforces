#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, minSock;
    cin>>a>>b;
    minSock = min(a, b);
    a -= minSock;
    b -= minSock;
    cout<<minSock<<" "<<(a/2)+(b/2)<<endl;
}