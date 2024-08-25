#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
bitset<n + 1> sieve;
void sieve_build() {
    sieve.set();
    #pragma omp parallel for
    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i)
            sieve[j] = false;
        }
    }
    // for getting all primes from 2 to n, iterate the bitset
}