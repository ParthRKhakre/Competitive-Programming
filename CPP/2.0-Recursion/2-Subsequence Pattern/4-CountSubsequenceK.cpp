#include<bits/stdc++.h>
using namespace std;

int countSubsequence(int arr[],int n,int idx,int sum,int k){

    if(idx >= n){
        if(sum == k) return 1;
        else return 0;
    }
    
    sum += arr[idx];
    int cntleft = countSubsequence(arr,n,idx+1,sum,k);
    sum -= arr[idx];
    int cntright = countSubsequence(arr,n,idx+1,sum,k);
    return cntleft + cntright;
}

int main(){

    int n,k,sum = 0;
    cin>>n>>k;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<countSubsequence(arr,n,0,sum,k);
}