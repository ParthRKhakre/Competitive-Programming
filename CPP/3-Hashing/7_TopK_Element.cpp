#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(int nums[], int k,map<int,int> mpp) {
        vector<int> v;
        for(auto it : mpp){
        if(k == 0) break;
        if(k>0){
            v.push_back(it.first);
            k--;
        }
    }
    return v;
}



int main(){

    map<int,int> mpp;
    int n;
    cin>>n;
    int num[n];

    for(int i = 0;i<n;i++){
        cin>>num[i];
        mpp[num[i]]++;
    }

    int k;
    cin>>k;

   vector<int> v = topKFrequent(num,k,mpp);

   for(auto it : v) cout<<(it)<<" ";

    return 0;
}