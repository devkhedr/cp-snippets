#include <iostream>

using namespace std;


const int MOD = 1e9 + 7;

// Multiplication modulo
int mult(int a, int b) {
    return a%MOD * b%MOD % MOD;
}

// Addition modulo
int add(int a, int b) {
    return (a%MOD + b%MOD) % MOD;
}

// fast power
int fast_power(int base, int power) {
    int result = 1;
    while (power > 0) {
        if (power % 2 == 1) {
            result = result * base;
        }
        base = base * base;
        power = power / 2;
    }
    return result;
}

// fast power with modulo for numbers up to 1e18
int fast_power_modulo(int n, int x) {
    int result = 1;
    while (x > 0) {
        if (x % 2 == 1) {
            result = mult(result, n);
        }
        n = mult(n, n);
        x>>=1;
    }
    return result;
}
// used multiplication to avoid overflow

int main() {
	int n = 20, x = 2;
    cout << fast_power_modulo(n, x) << endl;
	return 0;
}