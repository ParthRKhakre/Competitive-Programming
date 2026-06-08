#include <bits/stdc++.h>

using namespace std;

int minJump(vector<int> &height, int n)
{

    if (n == 0)
        return 0;

    int left = minJump(height, n - 1) + abs(height[n] - height[n - 1]);
    int right = INT_MAX;

    if (n > 1)
    {
        right = minJump(height, n - 2) + abs(height[n] - height[n - 2]);
    }

    return min(left, right);
}

int memoization(vector<int> &height, int n, vector<int> &dp){
    if (n == 0)
        return 0;

    if (dp[n] != -1){
        return dp[n];
    }

    int left = memoization(height, n - 1, dp) + abs(height[n] - height[n - 1]);
    int right = INT_MAX;

    if (n > 1){
        right = memoization(height, n - 2, dp) + abs(height[n] - height[n - 2]);
    }

    return dp[n] = min(left,right);
}

int main(){

    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++)
        cin >> height[i];

    vector<int> dp(n+1,-1);

    cout << memoization(height, n - 1,dp);
}