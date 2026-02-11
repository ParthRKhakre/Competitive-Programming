#include<bits/stdc++.h>
using namespace std;

int sum_of_n(int num){
    if(num == 0){
        return 0;
    }
    return num + sum_of_n(num-1);
}

int main(){

    int num;
    cin>>num;
    int summation = sum_of_n(num);
    cout<<summation;
    return 0;
}