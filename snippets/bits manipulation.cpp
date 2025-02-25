#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
    return (n | (1 << pos));
}

int clearBit(int n, int pos) {
    return (n & ~(1 << pos));
}

int swapBit(int n, int pos) {
    return (n ^ (1 << pos));
}

pair<int, int> swapTwoIntegers(int a, int b) {
    a^=b;
    b^=a;
    a^=b;
    return {a, b};
}

int countBits(int n) {
    int cnt = 0;
    while(n) {
        if(n & 1) cnt++;
        n >>= 1;
    }
    return cnt;
}

/*
X-1 is very important!

X 	= 840 	= 01101001000
X-1 = 839 	= 01101000111		What happened? First bit 16=(2^4) is removed, and 15=2^4-1 is added.

X & (X-1) 	= 01101000000		first bit from right removed

X & ~(X-1) 	= 01101001000 & 10010111000 = 00000001000	value of 1<<SmaintestBitIdx
*/




int countNumBits2(int mask) {	//	O(bits Count)		__builtin_popcount
	int ret = 0;
	while (mask) 	{
		mask &= (mask-1);
		++ret;	// Simply remove the last bit and so on
	}
	return ret;
}


bool checkPowerOfTwo(int n) {
    return (n && !(n & (n-1)));
}

int findUniqueElement(vector<int> &arr) {
    int x = 0;
    for(int i=0; i<arr.size(); i++) {
        x ^= arr[i];
    }
    return x;
}

bool allBitsAreSet(int n){
    if (((n + 1) & n) == 0)
        return true;
    return false;
}

bool bitsAreInAlternateOrder(unsigned int n)
{
    // if n = 1010101010
    // n>>1 = 0101010101
    unsigned int num = n ^ (n >> 1);

    // To check if all bits are set in 'num'
    return allBitsAreSet(num);
}

int generateSubsets(vector<int> &arr) {
    int n = arr.size();
    for(int mask=0; mask<(1<<n); mask++) {
        for(int j=0; j<n; j++) {
            if(mask & (1<<j)) {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

int main() {
    fastio;
    return 0;
}