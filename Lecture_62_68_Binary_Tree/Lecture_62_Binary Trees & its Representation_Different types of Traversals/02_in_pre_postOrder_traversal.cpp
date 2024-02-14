#include<iostream>
#include<queue>
using namespace std;

class node{

    public:

    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildBinaryTree(node* root){

    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting left node : "<<data<<endl;
    root->left=buildBinaryTree(root->left);

    cout<<"Enter the data for inserting right node : "<<data<<endl;
    root->right=buildBinaryTree(root->right);

    return root;
    
}

void inOrderTraversal(node* root){
    
    //base case
    if(root==NULL){
        return;
    }

    //rr
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

void preOrderTraversal(node* root){
    //base case
    if(root==NULL){
        return;
    }

    //rr
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void postOrderTraversal(node* root){
    //base case
    if(root==NULL){
        return;
    }

    //rr
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){

    node* root=NULL;

    root=buildBinaryTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"inOrder : ";
    inOrderTraversal(root);  
    cout<<endl;

    cout<<"preOrder : "; 
    preOrderTraversal(root);
    cout<<endl;

    cout<<"postOrder : ";
    postOrderTraversal(root);

return 0;
}