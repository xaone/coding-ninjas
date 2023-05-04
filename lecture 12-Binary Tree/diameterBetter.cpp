#include<bits/stdc++.h>
#include "BinaryTree.h"
using namespace std;

pair<int,int> heightDiameter(BinaryTreeNode<int>* root){
    
    if(root==NULL){
        pair<int,int>p;
        p.first=0; //height
        p.second=0; //diameter
        return p;        
    }

    pair<int,int> leftSubTree = heightDiameter(root->left);
    pair<int,int> rightSubTree = heightDiameter(root->right);

    int lh=leftSubTree.first;
    int ld=leftSubTree.second;
    int rh=rightSubTree.first;
    int rd=rightSubTree.second;

    int height = 1+max(lh,rh);
    int diameter=max(lh+rh,max(ld,rd));
    pair<int,int> hd;
    hd.first=height;
    hd.second=diameter;
    return hd;
}

//tc=o(n)