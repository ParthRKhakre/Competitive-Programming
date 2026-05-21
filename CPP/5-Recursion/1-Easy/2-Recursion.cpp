#include<bits/stdc++.h>
using namespace std;

void printN21(int n){

    if(n == 1){
        cout<<n;
        return;
    }

    cout<<n;
    printN21(n-1);
}

void print12N(int n){
    if(n == 1){ 
        cout<<1;
        return;
    }
    print12N(n-1);
    cout<<n;
}

void N2N(int n){
    if(n == 0){
        return;
    }
    cout<<n;
    N2N(n-1);
    cout<<n;
}  

int main(){

    int n;
    cin>>n;

    N2N(n);
    return 0;
}