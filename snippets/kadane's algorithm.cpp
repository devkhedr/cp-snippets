#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int max_so_far = INT_MIN, max_ending_here = 0;
    for(int i = 0; i < n; i++) {
        max_ending_here = max(max_ending_here + vec[i], vec[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    cout << max_so_far << endl;

    int min_so_far = INT_MAX, min_ending_here = 0;
    for(int i = 0; i < n; i++) {
        min_ending_here = min(min_ending_here + vec[i], vec[i]);
        min_so_far = min(min_so_far, min_ending_here);
    }
    cout << min_so_far << endl;
    return 0;
}