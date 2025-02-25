#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

struct customCompare {
    bool operator()(const string &a, const string &b) const {
        return a.length() < b.length();  // Sort by string length
    }
};

bool comp(const int &x, const int &y) {
    return x > y;
}
int main() {
    fastio
    set<string, customCompare> st = {"abc", "ad", "abcd", "a"};
    for(auto it: st) {
        cout << it << " ";
    }
    cout << endl;
    vector<int> vec = {50,20,30,40,60,10};
    sort(vec.begin(), vec.end(), comp);
    for(auto it: vec) {
        cout << it << " ";
    }
    cout << endl;
    
    map<string, int, customCompare> mp;
    mp["apple"] = 1;
    mp["banana"] = 2;
    mp["kiwi"] = 3;

    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }
    return 0;
}