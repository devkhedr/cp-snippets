#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

auto merge_intervals(vector<pair<ll, ll>> &intervals) {
    sort(intervals.begin(), intervals.end());
    vector<pair<ll, ll>> merged;
    for (auto interval : intervals) {
        if (merged.empty() || merged.back().second < interval.first) {
            merged.push_back(interval);
        } else {
            merged.back().second = max(merged.back().second, interval.second);
        }
    }
    return merged;
}
int main() {
    fastio;
    
    return 0;
}