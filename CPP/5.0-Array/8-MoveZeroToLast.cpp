#include<bits/stdc++.h>
using namespace std;
int main(){

    int total;
    cin>>total;

    vector<int> nums(total);
    int n = nums.size();

    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    
    int cnt = 0;
        vector<int> temp;

        for(int i = 0;i<n;i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
                cnt++;
            }
        }

        for(int i = cnt;i<n;i++){
            temp.push_back(0);
        }
        nums = temp;

        for(auto it:nums) cout<<it<<" ";
}