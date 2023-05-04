// Code : Find a node
// Send Feedback
// For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
//  Input Format:
// The first line of each test case contains elements of the first tree in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place.

// The second line of each test case contains the node value you have to find.


// For example, the input for the tree depicted in the below image would be:

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
#include"BinaryTree.h"
int k =false;
bool isNodePresent(BinaryTreeNode<int> *root, int x) {

    if(root==NULL){
        return k;
    }
    if(root->data==x){
        k=true;
        return k;
    }
    isNodePresent(root->left,x);
    isNodePresent(root->right, x);
    return k;
    // Write your code here
}