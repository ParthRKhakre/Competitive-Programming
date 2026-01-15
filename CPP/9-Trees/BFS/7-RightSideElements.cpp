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

vector<int> rightSideView(Node* root){
    vector<int> order;
    if(!root) return order;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i = 0;i<n;i++){
            Node* node = q.back();
            q.pop();
            order.push_back(node->val); 
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
        }
    }
    return order;        
}


int main(){



}