#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std;
// Construct Tree from Postorder and Inorder
// Send Feedback
// For a given postorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. You just need to construct the tree and return the root.
// Note:
// Assume that the Binary Tree contains only unique elements. 
// Input Format:
// The first line of input contains an integer N denoting the size of the list/array. It can also be said that N is the total number of nodes the binary tree would have.

// The second line of input contains N integers, all separated by a single space. It represents the Postorder-traversal of the binary tree.

// The third line of input contains N integers, all separated by a single space. It represents the inorder-traversal of the binary tree.
// Output Format:
// The given input tree will be printed in a level order fashion where each level will be printed on a new line. 
// Elements on every level will be printed in a linear fashion. A single space will separate them.
// Constraints:
// 1 <= N <= 10^4
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec
// Sample Input 1:
// 7
// 4 5 2 6 7 3 1 
// 4 2 5 1 6 3 7 
// Sample Output 1:
// 1 
// 2 3 
// 4 5 6 7 
// Sample Input 2:
// 6
// 2 9 3 6 10 5 
// 2 6 3 9 5 10 
// Sample Output 2:
// 5 
// 6 10 
// 2 3 
// 9 

/***********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
int findIndex(int * inorder,int root,int inLength){
	int k=0;
	for(int i=0;i<inLength;i++){
		if(inorder[i]==root){
			k= i;
		}
	}
	return k;
}
BinaryTreeNode<int> * buildTreeHelper(int *postorder, int postStart,int postEnd, int *inorder, int inStart, int inEnd){

	if(postStart > postEnd || inStart  > inEnd){
		return NULL;
	}

	int rootData = postorder[postEnd];
	BinaryTreeNode<int> * root = new BinaryTreeNode<int>(rootData);

	int k = findIndex(inorder,rootData,inEnd+1);

	root->left = buildTreeHelper(postorder, postStart, postStart + (k-inStart)-1, inorder, inStart, k-1);
	root->right = buildTreeHelper(postorder, postStart + (k-inStart), postEnd-1, inorder, k+1 , inEnd);
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {

	int poststart = 0;
	int postend = postLength - 1;
	int instart = 0;
	int inend = inLength - 1;
	return buildTreeHelper(postorder, poststart, postend, inorder, instart, inend);
    // Write your code here
}
