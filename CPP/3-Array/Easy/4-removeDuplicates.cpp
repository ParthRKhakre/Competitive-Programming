#include<bits/stdc++.h>
using namespace std;
int main(){

    int j = 1;
    int i = 0;

    int n;
    cin>>n;

    int arr[n] = {1,1,2,2,2,3,3};

    while(j<n){
        if(arr[i] == arr[j]){
            j++;
        }else{
            swap(arr[i+1],arr[j]);
            i++,j++;
        }
    }

    for(auto it : arr) cout<<it<<" ";

    return 0;
}