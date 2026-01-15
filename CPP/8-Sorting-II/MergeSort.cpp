#include<bits/stdc++.h>
using namespace std;
int main(){


    return 0;
}

void mergeSort(int a[],int low,int high){
    if(low == high) return;
    int mid = low + high / 2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

void merge(int a[],int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(low > 0){

    }

}