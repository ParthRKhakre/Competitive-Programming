#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> &arr,int target,int n){
        int pos = n,low = 0,high = n-1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] <= target){
                pos = mid;
                low = mid + 1;
            }else high = mid - 1;
        }
        return arr[pos];
}

int ceil(vector<int>&arr,int target,int n){

    int pos = n,low = 0,high = n-1;

    while(low<= high){
        int mid = (low+high)/2;

        if(arr[mid] >= target){
            pos = mid;
            high = mid - 1;
        }else low = mid + 1;
    }
    return arr[pos];
}

int main(){

    int n,target;
    cin>>n>>target;

    vector<int> arr(n);

    for(int i = 0;i<n;i++)
        cin>>arr[i];
    
    int floor_value = floor(arr,target,n);
    int ceil_value = ceil(arr,target,n);
    
    cout<<floor_value<<" "<<ceil_value;
}