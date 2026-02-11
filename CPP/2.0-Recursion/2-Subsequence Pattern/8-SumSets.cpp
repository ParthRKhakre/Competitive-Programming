#include<bits/stdc++.h>
using namespace std;

void subset(int idx,int n,int arr[],vector<int>&ds){
        if(idx >= n){
            int sum = 0;
            for(int i = 0;i<ds.size();i++)
                sum = sum + ds[i];
            cout<<sum<<endl;
            sum = 0;
            return; 
        }

        subset(idx+1,n,arr,ds);
        ds.push_back(arr[idx]);
        subset(idx+1,n,arr,ds);
        ds.pop_back();
        
}

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ds;

    subset(0,n,arr,ds);

}