#include<bits/stdc++.h>
using namespace std;

int FirstOccurance(vector<int> &arr,int target,int n){

    int first = -1,low = 0,high= n-1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]== target){
            first = mid;
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return first;
}

int LastOccurance(vector<int> &arr,int target,int n){

    int end = -1,low = 0,high= n-1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            end = mid;
            low = mid + 1;
        }else if(arr[mid] > target){
            high = mid-1;
        }else{
            low = mid + 1;
        }
    }    
    return end;
}

int main(){

    int n,target;
    cin>>n>>target;

    vector<int> arr(n);

    for(int i = 0;i<n;i++)
        cin>>arr[i];

    int first = FirstOccurance(arr,target,n);
    int last = LastOccurance(arr,target,n);

    vector<int> range = {first,last};

    for(auto it:range)
        cout<<it<<" ";
    
}