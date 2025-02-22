#include <bits/stdc++.h>

using namespace std;

//check if a number is prime
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


// check if a number is prime faster
bool is_prime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

//primes up to n
vector<int> primes(int n) {
    vector<int> p;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            p.push_back(i);
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return p;
}

// modified sieve of eratosthenes
vector<int> primes(int n) {
    vector<int> p;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            p.push_back(i);
            for (int j = i + i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return p;
}


int main() {

    return 0;
}
