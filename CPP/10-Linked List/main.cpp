#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

Node* array2linkedlist(int arr[],int n){

    if(n == 0) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* current = head;

    for(int i = 1; i < n;i++){
        current -> next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

void print(Node* head){
    while(head){
        cout << head->data << " ";
        head = head -> next;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    print(array2linkedlist(arr,5));
}