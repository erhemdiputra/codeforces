#include<bits/stdc++.h>

using namespace std;

int lenPrimes = 1000050;
bool primes[1000050];

void gen_prime() {
    memset(primes, true, sizeof(primes));

    primes[0] = false;
    primes[1] = false;

    for(int i = 2; i * i <= lenPrimes; i++) {
        if(primes[i]) {
            for(int j = i * i; j <= lenPrimes; j+=i) {
                primes[j] = false;
            }
        }
    }
}

int main() {
    gen_prime();

    int n;
    cin>>n;

    for(int i = 2; i <= n; i++) {
        if(!primes[i] && !primes[n-i]) {
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }
}