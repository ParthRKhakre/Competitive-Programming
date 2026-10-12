#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    if(n == 1) cout<<"";

    int a[n];

    for(int i = 1;i<=n;i++){
        if(a[i-1] != i){
            cout<<i;
            break;
        }
    }

}