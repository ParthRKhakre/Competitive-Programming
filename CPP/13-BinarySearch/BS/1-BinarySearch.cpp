#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &arr,int n,int target){
    int low  = 0,high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) high = mid - 1;
        else low  = mid + 1;
    }
    return -1;
}

int recursive(vector<int> &arr,int target,int low,int high){
    if(low > high) return -1;

    int mid = (low + high) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target)  recursive(arr,target,mid + 1,high);
    else recursive(arr,target,low,mid+1);
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int> arr(n);

    for(int i = 0;i < n;i++)
        cin>>arr[i];

    cout<<recursive(arr,target,0,n-1);
}