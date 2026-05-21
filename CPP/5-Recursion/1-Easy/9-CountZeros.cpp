#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int countZero(int num){
    
}

int count(int num,int cnt){
    if(num == 0)
    return 0;

    int remainder = num % 10;
    if(remainder == 0) cnt++;
    int val = num / 10;
    return count(val,cnt);
}

int main(){

    int num;
    cin>>num;

    countZero(num);
    cout<<cnt;
    return 0;
}
