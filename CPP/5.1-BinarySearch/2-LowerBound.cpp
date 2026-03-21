#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &arr,int n,int target){
    int low = 0,high = n-1,lb = n;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] >= target){
            lb = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return lb;
}

int STL(vector<int>&arr,int target){
    int lb = lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    return lb;
}

int main(){
    int n,target;
    cin>>n>>target;

    vector<int> arr(n);

    for(int i = 0;i < n;i++)
        cin>>arr[i];
 
    int lb = STL(arr,target);
    cout<<lb;    

}