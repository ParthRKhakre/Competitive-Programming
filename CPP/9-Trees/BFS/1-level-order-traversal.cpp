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

void bfs(Node* root){
    if(!root) cout<<"Empty Root";
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0;i < n;i++){
            Node* node = q.front();
            q.pop();
            cout<<node->val<<" ";
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
}

vector<vector<int>> level_order_traversal(Node* root){
    vector<vector<int>> order;
    if(!root) return order;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        vector<int> level;
        for(int i = 0;i < n;i++){
            Node* node = q.front();
            q.pop();
            level.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        order.push_back(level);
    }
    return order;
}

int main(){

    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    bfs(root);
}