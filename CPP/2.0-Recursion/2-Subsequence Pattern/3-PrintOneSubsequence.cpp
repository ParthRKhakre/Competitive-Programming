#include<bits/stdc++.h>
using namespace std;

bool oneSubsequenceWithSumK(int arr[],int n,int idx,int sum,int k,vector<int>&ds){
    if(idx >= n){
        if(k == sum){
            for(auto it:ds) cout<<it<<" ";
                return true;
        }
        return false;
    }
    ds.push_back(arr[idx]);
    sum += arr[idx];
    if(oneSubsequenceWithSumK(arr,n,idx+1,sum,k,ds) == true) return true;
    ds.pop_back();
    sum-=arr[idx];
    if(oneSubsequenceWithSumK(arr,n,idx+1,sum,k,ds) == true) return true;

    return false;
}
 

int main(){

    int n,k,sum = 0;
    vector<int>ds;

    cin>>n>>k;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    oneSubsequenceWithSumK(arr,n,0,sum,k,ds);
    return 0;
}