#include <iostream>

using namespace std;

// fibonacci of a number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// fibonacci of numbers from 1 to n
const int N = 1e5 + 5, MOD = 1e9 + 7;
int fib[N];
void pre() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < N; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }
}

// factorial of a number
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// factorial of numbers from 1 to n
const int N = 1e5 + 5, MOD = 1e9 + 7;
int fact[N];
void pre() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }
}


int main() {
	pre();
    int n;  cin >> n;
    cout << fact[n] << endl;
	return 0;
}