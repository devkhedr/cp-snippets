#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

// factorization of a number in O(sqrt(n))
void factorization2(int n) {
	vector<int> v;
	for (int i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			v.push_back(i);
			if(i != n/i) v.push_back(n/i);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

// prime factorization of a number in O(sqrt(n))
void prime_factorization(int n) {
	vector<int> v;
	for (ll i = 2; i * i <= n; i++) {
		while(n%i == 0) {
			v.push_back(i);
			n /= i;
		}
	}
	if(n > 1) v.push_back(n);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

// count of divisors of a number in O(sqrt(n))
int count_divisors(int n) {
	int cnt = 0;
	for (int i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			cnt++;
			if(i != n/i) cnt++;
		}
	}
	return cnt;
}

// count of prime factors of a number in O(sqrt(n))
int count_prime_factors(int n) {
	int cnt = 0;
	for (ll i = 2; i * i <= n; i++) {
		while(n%i == 0) {
			cnt++;
			n /= i;
		}
	}
	if(n > 1) cnt++;
	return cnt;
}

//count of divisors of a number in O(sqrt(n)) using prime factorization
int count_divisors2(int n) {
	int cnt = 1;
	for (ll i = 2; i * i <= n; i++) {
		int c = 0;
		while(n%i == 0) {
			c++;
			n /= i;
		}
		cnt *= (c+1);
	}
	if(n > 1) cnt *= 2;
	return cnt;
}

// sum of divisors of a number in O(sqrt(n))
int sum_divisors(int n) {
	int sum = 0;
	for (int i = 1; i * i <= n; i++) {
		if(n%i == 0) {
			sum += i;
			if(i != n/i) sum += n/i;
		}
	}
	return sum;
}

// sum of prime factors of a number in O(sqrt(n))
int sum_prime_factors(int n) {
	int sum = 0;
	for (ll i = 2; i * i <= n; i++) {
		while(n%i == 0) {
			sum += i;
			n /= i;
		}
	}
	if(n > 1) sum += n;
	return sum;
}

// get divisors for all numbers from 1 to n in O(n*sqrt(n))
// using harmonic series O(N)
vector<vector<int>> get_divisors(int n) {
	vector<vector<int>> divisors(n+1);
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			divisors[j].push_back(i);
		}
	}
	return divisors;
}

// prime factorization of all numbers from 1 to n in O(n*sqrt(n))
// using sieve O(NloglogN)
vector<vector<pair<int, int>>> power_prime_factorization(int n) {
	vector<vector<pair<int, int>>> divisors(n+1);
	vector<int> prime(n+1, 0);
	for (int i = 2; i <= n; i++) {
		if(prime[i] == 0) {
			for (int j = i; j <= n; j += i) {
				int x = j, c = 0;
				while(x%i == 0) {
					x /= i;
					c++;
				}
				divisors[j].push_back({i,c});
				prime[j] = 1;
			}
		}
	}
	return divisors;
}


int main() {
	
	return 0;
}
