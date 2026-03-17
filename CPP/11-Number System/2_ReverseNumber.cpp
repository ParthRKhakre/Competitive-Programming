#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int reverse = 0, remainder = 0;

    while(x != 0){
        remainder = x % 10;
        if(reverse < INT_MIN || reverse > INT_MAX) return 0;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
    return reverse;
}

int main(){

 int num;
 cin >> num;

 int val = reverse(num);
 cout<<val;

    return 0;
}

