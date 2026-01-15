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

vector<double> LevelAverage(Node* root){
    vector<double> avg;
    if(!root) return avg;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        double sum = 0;

        for(int i = 0;i < n;i++){
            Node* node = q.front();
            q.pop();
            sum += node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);\
        }
        avg.push_back(sum/n);
   }
   return avg;
}


int main(){

    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    vector<double> level_average = LevelAverage(root);
    for(auto it:level_average) cout<<it<<" ";
}