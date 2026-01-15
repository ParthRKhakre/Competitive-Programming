#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n] = {1,2,1,3,3,4};
    bool flag = true;

    for(int i = 1;i<n;i++){
        if(arr[i-1] <= arr[i]){
            flag = false;
            continue;
        }else{
            cout<<"Unsorted";
            break;
        }
    }

    cout<<flag;

    return 0;   
}