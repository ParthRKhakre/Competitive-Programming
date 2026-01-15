#include<bits/stdc++.h>
using namespace std;

// string RSP(string s,int k){
//     if(k == 1) return s;

//     string r = "";
//     for(int i = 0;i<k;i++){
//         r += s[i];
//     }
//     reverse(r.begin(),r.end());
    
//     for(int i = 0;i<k;i++){
//         s[i] = r[i];
//     }
//     return s;
// }

// int minLength(vector<int>& nums, int k) {

//     int sum = 0 ,cnt = 0,j = 0;
//         for(int i = 0;i<nums.size();i++){
//             if(nums[i] == k) 
//             return 1;

//             for(int i = 0;i<nums.size();i++){
//                 sum += nums[i];
//                 cnt++;
//                 if(sum == k){
//                     if(nums[i] != nums[i-1]) return cnt;
//                 }else if(sum < k){
//                     continue;
//                 }else{
//                     sum -= nums[j];
//                     j++;
//                 }
//             }  
//         }
//     return -1;        
// }
int minLength(vector<int>& nums, int k) {
    int sum = 0, j = 0, ans = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        while (sum >= k) {
            if (sum == k)
                ans = min(ans, i - j + 1);
            sum -= nums[j++];
        }
    }
    return ans == INT_MAX ? -1 : ans;
}


int main(){

    vector<int> nums = {2,2,3,1};
    // vector<int> nums = {5,5,4};
    // vector<int> nums = {5,5,4};
    int k = 4;

    int x = minLength(nums,k);
    cout<<x;   
}