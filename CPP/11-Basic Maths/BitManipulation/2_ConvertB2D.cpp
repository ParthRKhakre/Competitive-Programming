#include<bits/stdc++.h>
using namespace std;

vector<int> convertToBinary(int n){
    vector<int> BinaryVector;

    int remainder;
    while(n){
        remainder = n % 2;
        BinaryVector.push_back(remainder);
        n /= 2;
    }
    reverse(BinaryVector.begin(),BinaryVector.end());
    return BinaryVector;
}

int convertToDecimal(vector<int> v){
    reverse(v.begin(),v.end());
    int sum = 0,powOfTwo = 1;
    for(int i = 0;i<v.size();i++){
        if(v[i] != 0){
            sum += powOfTwo * v[i];
        }
        powOfTwo *= 2;
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    vector<int> binary = convertToBinary(n);
    int decimal = convertToDecimal(binary);
    cout<<decimal;
}