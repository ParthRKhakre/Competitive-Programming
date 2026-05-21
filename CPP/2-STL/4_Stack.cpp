#include<bits/stdc++.h>
using namespace std;
int main(){

    // a stack is a container that follows LIFO (Last In, First Out) principle.
    // It is defined in <stack>.
    // all operation happens in O(1)
    // stack in STL is implemented using a deque internally.



    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    cout<<st.top()<<endl; // check the element present at the top

    st.pop(); // remove the top most element
    cout<<st.top()<<endl;

    cout<<st.size()<<endl; // check the size of stack
    
    
    st.empty(); // empty the stack
    cout<<""<<st.top();

    return 0;
}