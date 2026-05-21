#include<bits/stdc++.h>
using namespace std;

void merger(vector<int> &arr,int left,int mid,int right){
    vector<int> temp;
    int i = left,j = mid+1;
    while(i <= mid && j <= right){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= right){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = 0; k < (int)temp.size(); k++){
        arr[left + k] = temp[k];
    }
}

void merge_sort(vector<int> &arr,int left,int right){
        if(left >= right){
            return;
        }
        int mid = left + (right - left) / 2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merger(arr,left,mid,right);        
}
 
int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}