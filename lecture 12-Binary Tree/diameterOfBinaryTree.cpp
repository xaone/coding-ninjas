#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

int height(BinaryTreeNode<int> * root){
    if(root==NULL){
        return NULL;
    }

    return + max(height(root->left), height(root->right));
}

int diameterOfBinaryTree(BinaryTreeNode<int> * root){

    if(root==NULL){
        return 0;
    }

    int option1= height(root->left)+height(root->right);
    int option2 = height(root->left);
    int option3 = height(root->right);

    return max(option1,max(option2,option3));
}


int main(){

}