#include<bits/stdc++.h>
using namespace std;

void stack_sort(stack<int>& st,multiset<int>& ms){
    if(st.empty()) return;
    int val = st.top();
    st.pop();
    ms.insert(val);
    stack_sort(st,ms);
}

int main(){

    stack<int> st;
    multiset<int> ms;

    st.push(1);
    st.push(4);
    st.push(5);
    st.push(2);
    stack_sort(st,ms);
    for(auto it:ms){
        cout<<it<<" ";
    }
}