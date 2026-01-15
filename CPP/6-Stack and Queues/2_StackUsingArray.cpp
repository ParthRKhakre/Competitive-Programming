                                                                        /*
Implementing Stack using array
In order to create an array we need to know the size
So in order to implement a stack using array we need 
to know the size of stack                                               */

#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
   int st[10];
   int top;

   Stack(){
    top = -1;
   }

   void push(int data){
    if(top == 9){
        cout<<"Stack overflow!";
        return;
    }
    top = top + 1;
    st[top] = data;
   }

   void pop(){
    if(top == -1){   
        cout<<"Stack Underflow!";
        return;
    }
    top = top - 1;
   }

   void Top(){
    if(top == -1) cout<<-1<<endl;
    else cout<<st[top];
   }

   void size(){
    if(top == -1) return;
    cout<<top+1;
   }
};

int main(){

    Stack st;
    st.push(9);
    st.push(10);
    st.push(8);
    st.pop();
    st.Top();

    return 0;
}