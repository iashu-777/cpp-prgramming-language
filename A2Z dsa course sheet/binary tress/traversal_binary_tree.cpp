#include<bits/stdc++.h>
using namespace std;

    // Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


void preOrder(TreeNode *root,vector<int>&pre){ //root left right
    if(root==NULL){
        return;
    }
    pre.push_back(root->data);
    preOrder(root->left,pre);
    preOrder(root->right,pre);
}
void InOrder(TreeNode *root,vector<int>&In){ //left root right
    if(root==NULL){
        return;
    }
    InOrder(root->left,In);
    In.push_back(root->data);
    InOrder(root->right,In);
}
void postOrder(TreeNode *root,vector<int>&post){ //left right root
    if(root==NULL){
        return;
    }
    postOrder(root->left,post);
    postOrder(root->right,post);
    post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int>In;
    vector<int>pre;
    vector<int>post;
    // vector<vector<int>>ans;
    InOrder(root,In);
    preOrder(root,pre);
    postOrder(root,post);

    return {{In},{pre},{post}};
}