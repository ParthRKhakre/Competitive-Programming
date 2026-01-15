// Implement a stack using a Queue 
// push must be modified in order to 
// rearrange the elements

#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    queue<int> q;

    void push(int data){
        int size = q.size();
        q.push(data);

        for(int i = 1;i<=size;i++){
            q.push(q.front()); 
            q.pop();  
        }
    }

    void pop(){
        if(q.empty()){
          cout<<"stack Underflow!"<<endl;
          return;
        }
        q.pop();
    }

    int Top(){
        if(q.empty()){
            cout<<"Stack Underflow!"<<endl;
            return -1;
        }
        return q.front();
    }

    int Size(){
        return q.size();
    }
};
int main(){

    Stack st;
    st.push(9);
    st.push(10);
    st.Top();
    return 0;
}

// Operations Completed in O(1)
// In stack we use top 
// In Queue we use start and end
