#include<bits/stdc++.h>
using namespace std;

bool evenOrOdd(int x){
    if(x & 1 != 0) return true; // return 1 - odd
    else return false;          // return 0 - even
}

int main(){
    int x;
    cin>>x;
    int y = evenOrOdd(x);
    if(y) cout<<"Odd";
    else cout<<"Even";
    return 0;
}