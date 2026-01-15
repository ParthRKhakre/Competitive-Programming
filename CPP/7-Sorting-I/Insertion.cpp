#include<bits/stdc++.h>
using namespace std;

void insertion(int a[],int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j > 0 && a[j]<a[j-1]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = a[j];
            j--;
        }
    }
}


int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i = 0;i < n ;i++)
        cin>>a[i];

    insertion(a,n);
    
    for(auto it : a) cout<<it<<" ";
    
    return 0;
}

