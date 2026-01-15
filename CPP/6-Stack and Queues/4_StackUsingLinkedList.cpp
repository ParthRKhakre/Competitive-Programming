// Implementation of Stack using Linked List  
// Limitation of fixed size can be overcome 
// using linked list to implement stack 

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data2,Node*next2){
        data = data2;
        next = next2;
    }
};

class Stack{

public:
    Node * top = nullptr;
    int size = 0;

    void push(int data){
        Node*temp = new Node(data);
        temp->next = top;
        top = temp;
        size = size + 1;
    }

    void pop(){
        Node*temp = top;
        top = temp->next;
        delete temp;
        size = size - 1;
    }

    int Top(){
        return top->data;
    }

    int Size(){
        return size;
    }
};

int main(){

    Stack st;
    st.push(9);
    st.push(10);
    st.push(10);
    st.pop();
    st.Top();
    st.Size();
    return 0;
}