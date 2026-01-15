// In order to implement the Queue using stack we require two stacks
// Stack is LIFO - top()
// Queue is FIFO - front() and back()

#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    stack<int> st1;
    stack<int> st2;

    // Note: rememeber push() 
    // s1 -> s2
    // x -> s1
    // s2 -> s1

    void push(int x){
        while(st1.size()){
            st2.push(st1.top());
            st1.pop();
        }

        st1.push(x);
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int top(){
        if(!st1.empty()) 
        return st1.top();
        cout<<"Queue is empty";
        return -1;
    }

    void pop(){
        st1.pop();
    }

    int size(){
        return st1.size();
    }

    bool empty(){
        return st1.empty();
    }

};

int main(){

    Queue q;
    q.push(9);
    q.push(10);

   
    return 0;
}