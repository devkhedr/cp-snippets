#include <bits/stdc++.h>
#define endl '\n'
#define ll long 
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector <int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && nums[s.top()] < nums[i]) {
            res[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return res;
}

vector<int> prevGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && nums[s.top()] < nums[i]) {
            res[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return res;
}

vector<int> nextSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && nums[s.top()] > nums[i]) {
            res[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return res;
}
int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> res = nextGreaterElement(nums);
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}