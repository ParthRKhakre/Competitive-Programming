#include<bits/stdc++.h>
using namespace std;

void BinarySearch(vector<long long>&arr,long long k,long long n){
    long long low = 0,high = n-1;

    while(low <= high){
        long long mid = (low+high)/2;
        if(arr[mid] == k){
            cout<<"YES"<<endl;
            return;
        }else if(arr[mid] > k) high = mid - 1;
        else low = mid + 1;
    }
    cout<<"NO"<<endl;
}

int main(){

    long long n,k;
    cin>>n>>k;

    vector<long long> arr(n);

    for(long long i=0;i<n;i++)
        cin>>arr[i];
    
    while(k--){
        long long x;
        cin>> x;
        BinarySearch(arr,x,n);
    }    
}