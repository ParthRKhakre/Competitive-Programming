#include<bits/stdc++.h>
using namespace std;

int upperbound(vector<int> &arr,int target,int n){
    int low = 0,high = n-1,ub = n;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] > target){
            ub = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ub;
}

int upperboundSTL(vector<int>& arr,int target){
    int ub = upper_bound(arr.begin(),arr.end(),target) - arr.begin();
    return ub;
}

int main(){

    int n,target;
    cin>>n>>target;

    vector<int> arr(n);
    for(int i = 0;i<n;i++)
        cin>>arr[i];

    int ub = upperboundSTL(arr,target);
    cout<<ub;    
}