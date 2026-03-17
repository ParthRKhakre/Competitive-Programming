#include<bits/stdc++.h>
using namespace std;

void extract(int num){
    int digit  = 0;
    while(num > 0){
        digit = num % 10;
        cout<<digit<<" ";
        num = num / 10;
    }
}

void recursiveExtract(int num){

    if(num == 0) return;

    int digit = 0;

    digit = num % 10;
    cout<<digit<<" ";
    num = num / 10;

    recursiveExtract(num);
}

int main(){
    int num;
    cin >> num;
    recursiveExtract(num);
    return 0;
}

