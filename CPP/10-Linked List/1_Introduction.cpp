#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void traversal(Node*head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int LengthOfLL(Node * head){
    Node* mover = head;
    int length = 0;
    while(mover){
        mover = mover->next;
        length++;
    }
    return length;
}

void Search(Node*head,int value){
    Node*mover = head;
    int count = 0;
    while(mover){
        if(mover->data == value){
            cout<<"Yes";
            count++;
            break;
        }
        mover = mover->next;
    }
    if(count == 0) cout<<"No";
}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    return 0;
}