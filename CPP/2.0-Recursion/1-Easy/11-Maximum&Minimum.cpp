#include<bits/stdc++.h>
using namespace std;

vector<int> maxi_mini(int idx,vector<int>&arr,int mini,int maxi){
    if(idx == arr.size()) 
    return {mini,maxi};

    mini = min(mini,arr[idx]);
    maxi = max(maxi,arr[idx]);
    idx = idx + 1;
    return maxi_mini(idx,arr,mini,maxi);
}  

vector<int> getMinMax(vector<int> &arr) {
    int maxi = INT_MIN, mini = INT_MAX, idx = 0;
    return maxi_mini(idx,arr,mini,maxi);
}

int main(){

    vector<int> arr = {2,1,3,9,0};
    vector<int> minmax = getMinMax(arr);
    
    for(auto it:minmax)
    cout<<it<<" ";

}