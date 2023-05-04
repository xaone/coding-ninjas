#include<bits/stdc++.h>
using namespace std;
#include"treeNode.h"

//delete node
void deleteNode(TreeNode<int> * root){
    for(int i=0;i<root->children.size();i++){
        deleteNode(root->children[i]);
    }
    delete root;
}


// print at level k

void printAtLevelK(TreeNode<int> * root, int k){
    if(k<0 || root==NULL){
        cout<<"fuck you";
        return ;

    }
    if(k==0)
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);

    }
    cout<<"k : "<<k<< endl;

}
void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    for(int i=0;i<root->children.size();i++){
        printPostOrder(root->children[i]);
    }
    cout<<root->data<<" ";  
}
void printPreOrder(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";  

    for(int i=0;i<root->children.size();i++){
        printPostOrder(root->children[i]);
    }
}
    // cout<<root->data<<" ";  

TreeNode<int>* maxDataNode(TreeNode<int>* root){
    if(root==NULL){
        return NULL;

    }
    TreeNode<int>* maxNode = root;

    for(int i=0;i<root->children.size();i++){
        if(maxNode->data<root->children[i]->data){
            maxNode=root->children[i];
        }
    }
    return maxNode;
}
// return number of nodes
int sumOfNodes(TreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    int count=root->data;
    for(int i=0;i<root->children.size();i++){
        count=count+sumOfNodes(root->children[i]);
    }
    return count;
    // Write your code here
}

int NumberOfNodes(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=NumberOfNodes(root->children[i]);
    }
    return ans;
}// take input level wise
TreeNode<int>* takeInputLevelWise1(){
    int rootData;
    
    cout<<"enter the root data :"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);


    

    queue<TreeNode<int>*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* front=q.front();
        q.pop();
        int n;
        cout<<"enter number of child of root "<<front->data<<endl;
        cin>>n;

        for(int i=0;i<n;i++){
            int childData;
            cout<<"enter the data of "<<i+1<<" child of the root "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);

            q.push(child);

        }
    }
    return root;


}
TreeNode<int> * takeInputLevelWise(){
    cout<<"enter root data : "<<endl;
    int rootData;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }

    TreeNode<int>* root=new TreeNode<int>(rootData);

    cout<<"enter number of nodes you want of root "<<rootData<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int childData=-1;
        // cout<<"the child data for child number : "<<i<<endl;
        // cin>>childData;
        TreeNode<int>* child=new TreeNode<int>(childData);
        root->children.push_back(child);

    }
    cout<<rootData<<endl;
    for(int i=0;i<root->children.size();i++){
        cout<<"child "<<i<<" of "<<rootData<<endl;
        root->children[i]=takeInputLevelWise();
    }
    return root;
}


// print in a way where colon is used

void printTree1(TreeNode<int> * root){
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        // printTree1(root->children[i]);
        cout<<(root->children[i])->data<<",";

    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree1(root->children[i]);
    }

}


//simplePrint Tree
void printTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main(){
    TreeNode<int>* root= new TreeNode<int>(1);
    TreeNode<int>* node1= new TreeNode<int>(2);
    TreeNode<int>* node2= new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);
        // TreeNode<int>* root=takeInputLevelWise1();

    printTree1(root);
    cout<<"number of nodes :"<<NumberOfNodes(root)<<endl;

    cout<<"maxData node :"<<maxDataNode(root)->data<<endl;
    cout<<"printAtLevelK  :"<<endl;
    printAtLevelK(root,2);
    

    //treeCreated
    
}