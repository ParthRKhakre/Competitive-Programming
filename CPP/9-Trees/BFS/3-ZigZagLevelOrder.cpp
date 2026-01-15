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

vector<vector<int>> zig_zag(Node*  root){
    vector<vector<int>> zig_zag;
    if(!root) return zig_zag;
    queue<Node*> q;
    q.push(root);
    int level = 1;

    while(!q.empty()){
        int n = q.size();
        vector<int> level_arr;
        for(int i = 0;i<n;i++){
            Node* node = q.front();
            q.pop();
            level_arr.push_back(node->val);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        if(level % 2 == 0)
        zig_zag.push_back(level_arr);
        else{
        reverse(level_arr.begin(),level_arr.end());
        zig_zag.push_back(level_arr);
        }
        level++;
    }
}

int main(){

}