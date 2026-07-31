#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    public:
    Node(int _val){
        val = _val;
        left = NULL;
        right = NULL;
    }
};

vector<int> inorder_iterative(Node* root){
    vector<int> v;
    Node* node = root;
    stack<Node*> st;

    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }else{
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            v.push_back(node->val);
            node = node->right;
        }
    }

    return v;

}

int main(){


}