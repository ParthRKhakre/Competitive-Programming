#include<bits/stdc++.h>
using namespace std;

bool checker(vector<int> &arr,int i){
    if(i == arr.size()) return true;
    if(arr[i] < arr[i-1])
        return false;   
    return checker(arr,i+1);  
}

bool isSorted(vector<int> &arr){
    int i = 1;
    return checker(arr,i);
}

int main(){

    vector<int> arr = {1,2,4,8,9,12};
    cout<<isSorted(arr);
}