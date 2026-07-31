#include<bits/stdc++.h>
using namespace std;

class Node{
    public:    
    int data;
    Node* left;
    Node* right;

    public:
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> bfs(Node*root){
    
    vector<vector<int>> v;
    if(root == NULL) return v;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        vector<int> level;
        for(int i = 0;i < n ;i++){
            Node* node = q.front();
            level.push_back(node->data);
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);     
        }
        v.emplace_back(level);
    }
    return v;
} 

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<vector<int>> bfsList = bfs(root);
       for(auto level : bfsList)
        for(auto val : level)
            cout << val << " ";
}

