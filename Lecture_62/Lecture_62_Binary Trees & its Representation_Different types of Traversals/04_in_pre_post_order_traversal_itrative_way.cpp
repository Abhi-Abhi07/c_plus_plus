#include<iostream>
#include<queue>
#include<stack>
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
    // cout<<"Enter data : "<<endl;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    // cout<<"Enter the data for inserting left node : "<<data<<endl;
    root->left=buildBinaryTree(root->left);

    // cout<<"Enter the data for inserting right node : "<<data<<endl;
    root->right=buildBinaryTree(root->right);

    return root;
    
}

void inOrderTraversalWithoutRecusion(node* root){
    stack<node*>s;
    node* temp=root;
    while(temp!=NULL){
        s.push(temp);
        temp=temp->left;
    }
    while(!s.empty()){
        temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp=temp->right;
        while(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
    }
}

void preOrderTraversalWithoutRecusion(node* root){
    stack<node*>s;
    node* temp=root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        s.push(temp);
        temp=temp->left;
    }
    while(!s.empty()){
        temp=s.top();
        s.pop();
        temp=temp->right;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            s.push(temp);
            temp=temp->left;
        }
    }
}

void postOrderTraversalWithoutRecusion(node* root){
    stack<node*>s1,s2;
    node* temp;
    s1.push(root);
    while(!s1.empty()){
        temp=s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left!=NULL){
            s1.push(temp->left);
        }
        if(temp->right!=NULL){
            s1.push(temp->right);
        }
    }

    while(!s2.empty()){
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
}

int main(){

    node* root=NULL;
    cout<<"Enter data :- "<<endl;
    root=buildBinaryTree(root);

    // 1 3 7 -1 -1 11 13 -1 -1 -1 5 17 -1 -1 -1

    cout<<endl;
    postOrderTraversalWithoutRecusion(root);

return 0;
}