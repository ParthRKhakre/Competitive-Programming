#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

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

int lenght(Node*head){
    Node*temp = head;
    int cnt = 0;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

Node* convertArr2LL(vector<int> &arr){

    Node*head = new Node(arr[0]);
    Node*mover = head;

    for(int i = 1;i<arr.size();i++){
        Node*temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = mover->next;    
    }
    return head;
}

void print(Node*head){
    Node*temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* removeHead(Node* head){
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

Node* removeTail(Node*head){

    if(head == NULL || head -> next == NULL) return NULL;
    Node*temp = head;

    while(temp->next->next){
        temp = temp->next;
    }

    delete(temp->next);
    temp->next = nullptr;
    return head;
}

Node* deleteKth(Node*head,int K){

    if(head == NULL) return head;

    if(K == 1){
        Node*temp = head; 
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0;
    Node*temp = head;
    Node*prev = NULL;

   while(temp){
    cnt++;
    if(cnt == K){
        prev ->next = prev->next->next;
        delete temp;
        return head;
    }
    prev = temp;
    temp = temp->next;   
   }
}

Node* deleteValue(Node* head,int value){

    if(head->data == NULL) return NULL;
    Node* temp = head;
    Node*prev = NULL;

    while (temp){
      if(temp->data == value){
        prev->next = prev->next->next;
        break;        
        }
      prev = temp;
      temp = temp->next;
    }
    return head;
}

int main(){

    vector<int> arr = {2,3,1,4,5};
    Node*head = convertArr2LL(arr);
    head = deleteValue(head,7);
    print(head);
    return 0;
}