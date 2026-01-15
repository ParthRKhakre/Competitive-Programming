#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    public:
    Node(int data){
        val  = data;
        left = NULL;
        right = NULL;
    }
};

int level_order_successor(Node* root,int val){
    if(!root) return -1;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n = q.size();
        for(int i = 0;i < n;i++){
            Node* node = q.front();
            q.pop();
            if(node->val == val){
                if(!q.empty()){
                    return q.front()->val;
                }
                else return -1;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
}

int main(){

    Node* root = new Node(3);

    root->left = new Node(4);
    root->right = new Node(8);

    root->left->left = new Node(12);
    root->left->right  = new Node(14);
    root->left->right->left  = new Node(36);
    root->left->right->right  = new Node(9);

    root->right->left = new Node(7);
    root->right->right = new Node(11);
    root->right->right->left = new Node(2);
    root->right->right->right  = new Node(44);

    int key;
    cin>>key;
    int neighbour_val = level_order_successor(root,key);
    cout<<neighbour_val;

}