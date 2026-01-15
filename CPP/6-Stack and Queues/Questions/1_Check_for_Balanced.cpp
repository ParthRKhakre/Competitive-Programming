#include<bits/stdc++.h>
using namespace std;

bool balancedParentheses(string s){

    stack<char> st;

    for(int i = 0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        st.push(s[i]);
        else{
            if(st.empty()) return false;
            char ch = st.top();
            st.pop();

            if(s[i] == ')' && ch == '(' || s[i]==']' && ch == '[' || s[i] == '}' && ch == '{'){
                continue;
            }else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){

    string s = "()[{}()]";
    int val = balancedParentheses(s);
    cout<<val;
    return 0;
}