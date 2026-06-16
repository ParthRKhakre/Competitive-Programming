#include<bits/stdc++.h>
using namespace std;

vector<int> D2B(int n){
    vector<int> binary;

    while(n >= 1){
        binary.push_back(n % 2);
        n = n / 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}

int B2D(vector<int> v){
    reverse(v.begin(),v.end());
    int sum = 0,powTwo = 1;
    for(int i = 0;i < v.size();i++){
        if(v[i]!= 0){
            sum += v[i] * powTwo;
        }
        powTwo *= 2;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;

    vector<int> binary  = D2B(n);

    for(auto it:binary)
    cout << it;

    cout << endl;
    
    int decimal = B2D(binary);
    cout << decimal ;

    return 0;

}