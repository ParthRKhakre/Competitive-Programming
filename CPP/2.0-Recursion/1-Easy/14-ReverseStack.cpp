#include<bits/stdc++.h>
using namespace std;

stack<int> reverseStack(stack<int>&st,vector<int>&v){
    if(st.empty()){
        for(int i = 0;i<v.size();i++){
            st.push(v[i]);
        }
        return st;
    }

    int top = st.top();
    st.pop();
    v.push_back(top);
    return reverseStack(st,v);
}
 
int main(){ 

    int n;
    cin >> n;

    stack<int> st;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        st.push(x);
    }

    st = reverseStack(st, v);

    while (!st.empty()) {
        cout << st.top() << (st.size() == 1 ? '\n' : ' ');
        st.pop();
    }
    
    return 0;
}