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

vector<vector<int>> reverse_bfs(Node* root){
    vector<vector<int>> bottom_up;
    if(!root) return bottom_up;

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> level;
        
        for(int i = 0 ;i<n;i++){
            Node* node = q.front();
            q.pop();
            level.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        bottom_up.push_back(level);
    }
    reverse(bottom_up.begin(),bottom_up.end());
}

int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    reverse_bfs(root);
}