#include<bits/stdc++.h>
using namespace std;

int sum_of_digit(int num){
    if(num == 0){
        return 0;
    }
    int remainder = num % 10;
    int val = num / 10;
    return remainder + sum_of_digit(val);
}

int main(){
    int num;
    cin>>num;

    int total = sum_of_digit(num);
    cout<<total;
}