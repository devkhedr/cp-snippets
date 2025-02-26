#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int MOD = 1e9 + 7, N = 1e5;
int factorial[N + 1];

int mult(int a, int b) {
    return (1LL * a * b) % MOD;
}

int fastPower(int base, int power) {
    int result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        power /= 2;
    }
    return result;
}

int modInv(int n) {
    return fastPower(n, MOD - 2);
}

void fact() {
    factorial[0] = 1;
    for (int i = 1; i <= N; i++) {
        factorial[i] = mult(i, factorial[i - 1]);
    }
}

int nCr(int n, int r) {
    if (r > n) return 0; 
    int res = mult(factorial[n], modInv(factorial[n - r]));
    res = mult(res, modInv(factorial[r]));
    return res;
}

int main() {
    fastio;
    fact();
    cout << nCr(4, 2) << endl;
    return 0;
}
