#include<bits/stdc++.h>
using namespace std;

bool isSet(int n,int i){
    return ((n & (1<<i)) != 0);
}

int main(){

    int n,i;
    cin>>n>>i;

    bool value = isSet(n,i);
    cout<<value;
}