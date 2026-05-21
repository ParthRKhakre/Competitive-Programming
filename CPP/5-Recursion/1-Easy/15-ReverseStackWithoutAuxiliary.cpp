#include<bits/stdc++.h>
using namespace std;

void toBottom(stack<int>&st,int top){
    if(st.empty()){
        st.push(top);
        return;
    }
    int topelement = st.top();
    st.pop();
    toBottom(st,top);
    st.push(topelement);
}

void reverseStack(stack<int>&st){
    if(st.empty()){
        return ;
    }
    
    int top = st.top();
    st.pop();

    reverseStack(st);
    toBottom(st,top);
}


int main(){

}