#include<bits/stdc++.h>
using namespace std;

int CountSetBits(int n){
    int cnt = 0;    
    while(n){
        if((n & 1) != 0) cnt++;
        n = n>>1;
    }
    return cnt;
}

int main(){

    int n;
    cin>>n;

    int value = CountSetBits(n);
    cout<<value;
}