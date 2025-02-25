#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

// 2d prefix sum
int prefix_sum_2d(vector<vector<int>> &a, int x1, int y1, int x2, int y2) {
    int n = a.size(), m = a[0].size();
    vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] = a[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
    return prefix[x2 + 1][y2 + 1] - prefix[x1][y2 + 1] - prefix[x2 + 1][y1] + prefix[x1][y1];
}

int main() {
    fastio
    
    return 0;
}