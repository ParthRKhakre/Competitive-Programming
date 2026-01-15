#include<bits/stdc++.h>
using namespace std;


bool palindrome(int x){

    int remainder = 0 , val = 0; 
    int op = x;

    while(x != 0){
        remainder = x % 10;
    if(val < INT_MIN || x > INT_MAX) return false;
        val = val * 10 + remainder;
        x /= 10;
    }

    return (op == val) ? true : false ;
}

int main(){

    int num;
    cin >> num;
    bool output = palindrome(num);
    cout << output;
    return 0;
}

