#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* insertBinarySearchTree(node* &root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }

    if(data>root->data){
        root->right=insertBinarySearchTree(root->right,data);
    }

    else{
        root->left=insertBinarySearchTree(root->left,data);
    }
    return root;
}

void takeInput(node* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root=insertBinarySearchTree(root,data);
        cin>>data;
    }
    
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){//purana level complete travers ho gya
            cout<<endl;
            if(!q.empty()){//queue has some still child node
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
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

bool searchInBST(node* &root, int x) {
    // Write your code here.
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return 1;
    }
    if(root->data>x){
        return searchInBST(root->left,x);
    }
    else{
        return searchInBST(root->right,x);
    }
}

int main(){
    
    //10 8 21 7 27 5 4 3 -1

    node* root=NULL;
    cout<<"Enter data for BST : "<<endl;

    takeInput(root);

    levelOrderTraversal(root);

    cout<<"inOrder : ";
    inOrderTraversal(root);  
    cout<<endl;

    int x;
    cout<<"Enter data you want to search in BST : ";
    cin>>x;
    if(searchInBST(root,x)){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element are not present"<<endl;
    }

return 0;
}