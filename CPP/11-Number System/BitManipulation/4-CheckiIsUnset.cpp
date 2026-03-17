#include<bits/stdc++.h>
using namespace std;

int Unset(int n) {

        int msb = log2(n);
       for(int i = 0;i<msb;i++){

         if((n & (1<<i)) == 0){
            n = (n |(1<<i));
            break;
         }
       }
       return n;
}

int main(){

    int n;
    cin>>n;
    int setValue = Unset(n);
    cout<< setValue;

}