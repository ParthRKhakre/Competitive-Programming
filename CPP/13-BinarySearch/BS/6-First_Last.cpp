#include<bits/stdc++.h>
using namespace std;

vector<int> OccuranceRange(vector<int> &arr,int target,int n){

    int start= -1,end = -1,low = 0,high= n-1;

    while(low<=high){
        if(arr[low] == target){
            start = low;
            break;
        }else low++;
    }

    while(low<=high){
        if(arr[high] == target){
            end = high;
            break;
        }else high--;
    }
    
    return {start,end};
}

int main(){

    int n,target;
    cin>>n>>target;

    vector<int> arr(n);

    for(int i = 0;i<n;i++)
        cin>>arr[i];

    vector<int> range = OccuranceRange(arr,target,n);

    for(auto it:range)
        cout<<it<<" ";
    
}