#include <bits/stdc++.h>

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


ll fast_power(ll base, ll power, ll mod) {
    ll result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        power /= 2;
    }
    return result;
}

// mod inverse of a number using fermat's little theorem
ll modInverseFermat(ll a, ll m) {
    return fast_power(a, m - 2, m);
}

int main() {
    fast
    return 0;
}