#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimise("O3")
#pragma GCC target("sse4")
#pragma GCC omp parallel for

int n = 1e9;
bitset<1000000001> sieve;
void sieve_build() {
    sieve.set();
    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i)
            sieve[j] = false;
        }
    }
    // for getting all primes from 2 to n, iterate the bitset
}