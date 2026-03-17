#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n){
    return (n & 1 != 0) ? true : false;
}

int main(){

    int n,i;
    cin>>n>>i;

    bool value = isOdd(n);
    cout<<value;
}