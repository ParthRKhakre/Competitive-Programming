#include<bits/stdc++.h>
using namespace std;

int exponentiation(int a,int b){
    int result = 1;
    while(b > 0){
        if(b & 1) result = result * a;
        a = a * a;
        b = b >> 1;
    }
    return result;
}

int main(){

    int a,b;
    cin >> a >> b;
    cout << exponentiation(a,b);
}