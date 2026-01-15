#include<bits/stdc++.h>
using namespace std;

string convertT2B(int x){

    string s = "";

    while(x!=0){
        if(x % 2 == 1) s.append("1");
        else s.append("0");
        x = x / 2;
    }

    reverse(s.begin(),s.end());
    return s;
}

int convertB2T(string s){

    int len = s.length(),num = 0,p2 = 1;

    for(int i = len-1;i>=0;i++){
        if(s[i] == '1')
        num = num + p2;

        p2 = 2 * p2;
    }
    return num;
}

int main(){

    int x = convertB2T("1101");
    cout << x << endl;
    return 0;
}