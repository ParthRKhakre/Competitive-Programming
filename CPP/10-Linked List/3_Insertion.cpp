#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = NULL;
    }

    public:
    Node(int data1,Node*next1){
        data = data1;
        next = next1;
    }
};

Node* arr2LL(vector<int> &arr){
    Node*head = new Node(arr[0]);
    Node* mover = head;

    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp; // mover = mover->next;
    }
    return head;
}



int main(){

    vector<int> arr = {2,3,5,1,6};
    Node* head = arr2LL(arr);
    return 0;
}