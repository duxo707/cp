#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector<bool> sieve(n + 1, true);
// bitset<n + 1> sieve; // for smaller n
// sieve.set();
void sieve_build() {
    #pragma omp parallel for
    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i)
            sieve[j] = false;
        }
    }
    // for getting all primes from 2 to n, iterate the bitset
}
