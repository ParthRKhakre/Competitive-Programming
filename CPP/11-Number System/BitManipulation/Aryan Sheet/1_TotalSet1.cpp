#include<bits/stdc++.h>
using namespace std;

int setbits(int n){
    int cnt = 0;
    while(n){
        if(n & 1)
            cnt++;
        n = n >> 1;
    }
    return cnt;
}

int main(){

    int n ;
    cin>>n;

    int set = setbits(n);
    cout<<set;    
}