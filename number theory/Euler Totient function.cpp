#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// to count the numbers x that is less than <= N and coprime with N (GCD(x, N) equal 1)
int phii(int n) {
    int res = n;
    for(int i=2;i*i<=n;i++) {
        if(n % i == 0) {
            while(n %i == 0)
                n /= i;
            res -= res/i;
        }
    }
    if(n > 1) res -= res/n;
    return res;
}
int main() {
    fastio;
    int n; cin >> n;
    cout << phii(n);
    return 0;
}