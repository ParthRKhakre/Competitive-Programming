#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[6] = {3,2,1,5,3,2};

    //  Brute Solution - TC(nlogn)
    // sort(arr,arr+n);
    // cout<< arr[n-1];


    // Optimal Solution - TC(n)
    int max = INT_MIN;
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max;   

    return 0;
}


