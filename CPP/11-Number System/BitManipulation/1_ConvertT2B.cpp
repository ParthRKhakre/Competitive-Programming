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



int main(){

    int n;
    cin>>n;

    vector<int> binary = convertToBinary(n);

    for(auto it:binary){
        cout<<it<<" ";
    }
}