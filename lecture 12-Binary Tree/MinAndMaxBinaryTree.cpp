#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std;
// Min and Max of Binary Tree
// Send Feedback
// For a given a Binary Tree of type integer, find and return the minimum and the maximum data values.
// Return the output as an object of Pair class, which is already created.
// Note:
// All the node data will be unique and hence there will always exist a minimum and maximum node data.
// Input Format:
// The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.
// Output Format:
// The only line of output prints two integers denoting the minimum and the maximum data values respectively. A single line will separate them both.
// Constraints:
// 2 <= N <= 10^5
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec
// Sample Input 1:
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 1 14
// Sample Input 2:
// 10 20 60 -1 -1 3 50 -1 -1 -1 -1 
// Sample Output 2:
// 3 60

/**********************************************************

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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
#include<bits/stdc++.h>
using namespace std;
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if(root==NULL){
		pair<int,int>p;
		p.first=INT_MAX; //MIN
		p.second=INT_MIN; //MAX
		return p;
	}

	pair<int,int> leftSubTree=getMinAndMax(root->left);
	pair<int,int> rightSubTree=getMinAndMax(root->right);

	int maxNodeLeft=leftSubTree.second;	
	int minNodeLeft=leftSubTree.first;
	int maxNodeRight=rightSubTree.second;	
	int minNodeRight=rightSubTree.first;

	pair<int,int>p;
	p.first=min(minNodeLeft,min(minNodeRight,root->data));
	p.second=max(maxNodeLeft,max(maxNodeRight,root->data));
	return p;


	// Write your code here
}