#include<bits/stdc++.h>
using namespace std;

int insertPosition(vector<int> &arr,int target){
    int low = 0,high = arr.size()-1,position = arr.size();

    while(low <= high){
        int mid = (low + high)/2;
        if(target <= arr[mid]){
            position = mid;
            high = mid - 1;
        }else
            low = mid + 1;
    }

    return position;
}

int main(){

    int n,target;
    cin>>n>>target;

    vector<int> arr(n);
    for(int i = 0;i<n;i++)
        cin>>arr[i];

    cout<<insertPosition(arr,target);

}
