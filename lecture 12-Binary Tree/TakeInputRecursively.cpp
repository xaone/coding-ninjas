#include<bits/stdc++.h>
#include"BinaryTree.h"
using namespace std;


BinaryTreeNode<int> *takeInputLevelWise(){
    int rootData;
    cout<<"enter the root data :"<<endl;

    cin>>rootData;
    if(rootData==-1){
        return;
    }

    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;

    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        int leftNodeData;
        cout<<"enter the left node data of the root : "<<front->data<<endl;
        cin>>leftNodeData;

        if(leftNodeData!=-1){
            BinaryTreeNode<int>* leftNode=new BinaryTreeNode<int>(leftNodeData);
            pendingNodes.push(leftNode);
            front->left=leftNode;

        }
        int rightNodeData;
        cout<<"enter the right node data of the root : "<<front->data<<endl;
        cin>>rightNodeData;

        if(leftNodeData!=-1){
            BinaryTreeNode<int>* rightNode=new BinaryTreeNode<int>(rightNodeData);
            pendingNodes.push(rightNode);
            front->right=rightNode;

        }



    }
    return root;




}
int main(){
    int rootData;
    cout<<"enter the root data :"<<endl;

    cin>>rootData;
    if(rootData==-1){
        return 0;
    }


    BinaryTreeNode<int>* root = takeInputLevelWise(); 
    // BinaryTreeNode<int>* leftBinaryTreeNode = takeInputLevelWise(); 
    // BinaryTreeNode<int>* rightBinaryTreeNode = takeInputLevelWise(); 

    // root->left=leftBinaryTreeNode;
    // root->right =rightBinaryTreeNode;


}