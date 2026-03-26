#include<bits/stdc++.h>
using namespace std;

int nthsqrt(int n,int m){

    int ans = -1 ;
    for(int i = 1; i <= m;i++){
        int val = pow(i,n);
        if(val == m) ans = i; 
        else if(val > m) break;
    }
    return ans;   
}

//  FAST EXPONENTIAL 
long long power(int val,int n,int m){
    long long pow_val = 1;
    while(n > 0){
        if(n%2 == 1){
            pow_val *= val;
            if(pow_val > m) return pow_val; 
        }
        val *= val;
        if(val > m) val = m + 1;
        n /= 2;
    }
    return pow_val;
}

int nthsqrtbs(int n,int m){
    int ans = -1,low = 1,high = m;
    while(low <= high){
        int mid = (low + high) /2;
        long long val = power(mid,n,m);
        if(val == m) return mid;
        else if(val < m) low = mid + 1;
        else high = mid - 1; 
    }
    return ans;
}

int main(){
    int n,m;
    cin >> n >> m;
   cout << nthsqrtbs(n,m);
}