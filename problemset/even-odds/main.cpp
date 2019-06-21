#include<bits/stdc++.h>

using namespace std;

long long getEdge(long long n) {
    long long edge;

    if(n % 2 == 0) {
        edge = n / 2;
    } else {
        edge = ceil((double) n/2);
    }

    return edge;
}

int main() {
    long long n, k, edge, result;
    cin>>n>>k;

    edge = getEdge(n);

    if(k <= edge) {
        result = (k - 1) * 2 + 1;
    } else {
        result = (k - edge) * 2; 
    }

    cout<<result<<endl;
}