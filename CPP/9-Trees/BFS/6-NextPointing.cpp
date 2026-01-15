#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    
    public:
    Node(int data){
        val  = data;
        left = NULL;
        right = NULL;
        next = NULL; 
    }
};

Node* nextPointing(Node* root){
    if(!root) return nullptr;
    Node* leftMost = root;
    while(leftMost->left != NULL){
        Node* current = leftMost;
        while(current != NULL){
            current->left->next = current->right;
            if(current->next!=NULL){
                current->right->next = current->next->left;
            }
            current = current->next;
        }
        leftMost = leftMost->left;
    }
    return root;        
}

int main(){


    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return 0;
}