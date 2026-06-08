#include<bits/stdc++.h>
using namespace std;

int recursive(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    return recursive(n-1) + recursive(n-2);
}   

int memorization(int n,vector<int> &dp){
    if(n < 0) return 0;
    if(n == 0) return 1;

    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = memorization(n-1,dp) + memorization(n-2,dp);  
}

int tabularization(int n,vector<int> &dp){

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2;i <= n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];    
}

int main(){

    int n;
    cin >> n;

    vector<int>dp(n+1,-1);

    cout<< tabularization(n,dp);
}