#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){

    int k = to_string(n).size();

    int copy = n;
    int remainder = 0, val = 0;

    while(n != 0){
        remainder = n % 10;
        val = val + pow(remainder,k);
        n /= 10;
    }

    if(val == copy) cout<<"Yes";
    else cout << "No";

}
int main(){

    int num;
    cin>>num;

    armstrong(num);
    return 0;
}


