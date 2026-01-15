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

class Queue{
public:
    Node* start = nullptr;
    Node* end = nullptr; 
    int size = 0;

    void push(int data){
        Node*temp = new Node(data);
        if(start == nullptr){
            start = end = temp;
        } 
        end->next = temp;
        size = size + 1;
    
    }

    void pop(){
        if(start == nullptr){
            end = nullptr;
        }
        Node*temp = start;
        start = start->next;
        delete temp;
        size = size - 1;
    }

    int top(){
        if(start == nullptr)
            return -1;
        return start->data;
    }

    void Size(){
        cout<<size<<endl;
    }
};

int main(){
    Queue q;
    q.push(9);
    q.push(10);
    int top = q.top();
    cout<<top<<endl;
    q.Size();
    return 0;
}

// All the operation happen in O(1)