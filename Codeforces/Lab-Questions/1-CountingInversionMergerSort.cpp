#include<bits/stdc++.h>
using namespace std;


void merge_sort(vector<int>& nums,int low,int high){

    int mid = (low + high) / 2;
    if(low == high) return;
    merge_sort(nums,low,mid);
    merge_sort(nums,mid+1,high);
   // merger(nums,low,mid,high);

}


int main(){

    vector<int> nums = {2,1,4,82,32,1,90,63,9,10};
    int low = 0,high = nums.size()-1;
    merge_sort(nums,low,high);

    for(auto it:nums) cout<<it<<" ";
}