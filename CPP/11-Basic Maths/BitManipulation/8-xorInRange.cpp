#include<bits/stdc++.h>
using namespace std;

int XORRange(int L,int R){
    int XOR = L;
    for(int i = L+1;i<=R;i++){
        XOR ^= i;
    }
    return XOR;
}

int main(){

    int L,R;
    cin>>L>>R;
    int XOR = XORRange(L,R);
    cout<< XOR;

}