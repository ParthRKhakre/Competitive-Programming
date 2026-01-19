#include<bits/stdc++.h>
using namespace std;

int upperCase(int idx,string &s){
    if(s[idx] == '\0') return -1;
    if(isupper(s[idx])) return idx;
    idx = idx + 1;
    return upperCase(idx,s);
}

int main(){
    string s;
    cin>>s;

    int idx = upperCase(0,s);
    cout<<idx;
    return 0;
}