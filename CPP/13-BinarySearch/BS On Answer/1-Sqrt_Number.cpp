#include<bits/stdc++.h>
using namespace std;

int Sqrt(int n){
    int ans = 0,val = 0;
    for(int i = 1;i <= n;i++){
        ans = i * i ;
        if(ans <= n)  val = i;
        else break;
    }
    return val;
}

int sqrt_bs(int n){
    int low = 1,high = n,val = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        if(mid * mid  <= n){
            val = mid;
            low = mid + 1;
       }else high = mid - 1;    
    }
    return val;
}

int main(){

    int n;
    cin >> n;
    
    cout << sqrt_bs(n);
}