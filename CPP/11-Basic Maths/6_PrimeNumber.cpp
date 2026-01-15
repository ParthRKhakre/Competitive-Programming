#include<bits/stdc++.h>
using namespace std;


bool prime(int num){
    bool flag = true;
    int i = 2;
    while(flag){
        if(num%i == 0 && num != i){
            flag = false;
            // break;
        }
        i++;
    }

    (flag == true) ? true : false;
}


int main(){

    int num;
    cin>>num;
    bool val = prime(num);
    cout<<val;

    return 0;
}

