#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    map<int,int> mpp;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int min = 0,max = 0;
    for(auto it : mpp){
        if(it.second > max){
            max = it.second;
        }
        cout<<max<<endl;
    }
    
    return 0;
}