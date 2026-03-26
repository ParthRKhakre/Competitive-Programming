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

int main(){
    int n,m;
    cin >> n >> m;
   cout << nthsqrt(n,m);
}