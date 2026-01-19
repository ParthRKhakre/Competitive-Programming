#include<bits/stdc++.h>
using namespace std;

void sumKsubsequence(vector<int>&ds,int arr[],int n,int idx,int K){

    if(idx == n){
        int sum = 0;
        for(auto it:ds)
            sum += it;
        
        if(K == sum){

            for(auto it:ds)
                cout<<it<<" ";
            
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[idx]);
    sumKsubsequence(ds,arr,n,idx+1,K);
    ds.pop_back();
    sumKsubsequence(ds,arr,n,idx+1,K);
}
 
int main(){

    int arr[] = {3,1,2,1,2};
    int n = 3, idx = 0,K;
    cin>>K;

    vector<int> ds;
    sumKsubsequence(ds,arr,n,idx,K);
}