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

// 1 2 3 4 5 6 7 8 
// 1+8 / 2 = 4




int main(){

    int n;
    cin >> n;
    
    cout << sqrt_bs(n);

}