#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    public:
    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};




int maxPathSum(Node* root){ 
        
}

int main(){
    Node* root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    int maxsum = maxPathSum(root);
    cout<<maxsum;
}

