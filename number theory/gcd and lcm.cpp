#include <iostream>

using namespace std;

// Gcd 
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Lcm
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}   
// used division to avoid overflow


int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
	return 0;
}