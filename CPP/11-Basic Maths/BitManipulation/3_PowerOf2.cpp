#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n > 0 && (n & (n-1)) == 0) return 1;
    else return 0;
}

int main(){

    int n;
    cin>>n;
    int x = isPowerOfTwo(n);

    if(x) cout<<"True";
    else cout<<"False";    
    return 0;
}


