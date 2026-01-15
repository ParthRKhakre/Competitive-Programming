#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {10,5,2,7,1,9};
    map<int,int> mp;
    int sum = 0,k = 15,length = 0;

    for(int i = 0;i<arr.size();i++){
       sum += arr[i];
       if(sum == k){
        length = max(length,i+1);
       }
       int rem = sum - k;
       if(mp.find(rem) != mp.end()){
            int len = i - mp[rem];
            length = max(length,len);
       }  
       if(mp.find(sum) == mp.end()){
         mp[sum] = i;
       }
    }
    cout<<length;    
}


    // Brute Force O(n^2)
    // for(int i = 0;i<n;i++){
    //     sum = 0;
    //     for(int j = i;j<n;j++){
    //         sum += arr[j];
    //        if(sum == k){
    //         leng = max(leng, j - i + 1);
    //        }else if(sum > k){
    //         break;
    //        }
    //     }
    // }
    // cout<<leng<<endl;



    // Better O(NlogN)
    // int sum = 0,length =0, k = 15;

    // for(int i = 0;i<arr.size();i++){
    //    sum += arr[i];
    //    if(sum == k){
    //     length = max(length,i+1);
    //    }
    //    int rem = sum - k;
    //    if(mp.find(rem) != mp.end()){
    //         int len = i - mp[rem];
    //         length = max(length,len);
    //    }  
    //    if(mp.find(sum) == mp.end()){
    //      mp[sum] = i;
    //    }
    // }