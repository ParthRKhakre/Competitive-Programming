#include <bits/stdc++.h>
using namespace std;

void permutation(int i, vector<int>& nums, vector<vector<int>>& ans) {
    if (i == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j = i; j < nums.size(); j++) {
        swap(nums[i], nums[j]);
        permutation(i + 1, nums, ans);
        swap(nums[i], nums[j]); // backtrack
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<vector<int>> ans;
    permutation(0, nums, ans);

    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << '\n';
    }

    return 0;
}
