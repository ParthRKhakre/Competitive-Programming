#include<bits/stdc++.h>
using namespace std;

string str = " ";

int reverse_a_num(int num){
    if(num == 0){
        return 0;
    }
    int remainder = num % 10;
    int val = num / 10;
    str.append(to_string(remainder));
    return reverse_a_num(val);
}

int main(){

    int n;
    cin>>n;

    reverse_a_num(n);
    int reverse = stoi(str);
    cout<<reverse;
}