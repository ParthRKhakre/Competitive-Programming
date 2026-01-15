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

vector<int> preorder_iterative(Node*root){
    vector<int> preorder;
    if(root == NULL) return preorder;

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->val);
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
    }
    return preorder;
}

int main(){
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = preorder_iterative(root);

    for(int x : ans)
    cout << x << " ";   
}
                                                                                      /*
        Tree:
              1
             / \
            2   3
           / \
          4   5
                                                                                      */