#include<bits/stdc++.h>
#include "BinaryTree.h"

using namespace std;

int main(){

    BinaryTreeNode<int>* root =new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* left =new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* right =new BinaryTreeNode<int>(3);

    root->left=left;
    root->right=right;
    
}
