#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

      int arr[n] = {1,3,2,7,7,5};
    // int arr[n] = {6,6,6,6,6,6}; Edge Case
    // int arr[n] = {1,6,6,6,6,6}; Worst Case

    // Brute
    // sort(arr,arr+n);
    // for(int i = n - 1;i>0;i--){
    //     if(arr[i] != arr[i-1]){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    // Better TC:O(N)+O(N)
    // int largest = INT_MIN;
    // int secondLargest = INT_MIN;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }

    // for(int i = 0;i<n;i++){
    //     if(arr[i]>secondLargest && arr[i]<largest){
    //         secondLargest = arr[i];
    //     }
    // }
    // cout<<secondLargest;

    int largest = arr[0];
    int secondlargest = INT_MIN;

    for(int i = 1;i<n;i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout<<secondlargest;

    return 0;
}