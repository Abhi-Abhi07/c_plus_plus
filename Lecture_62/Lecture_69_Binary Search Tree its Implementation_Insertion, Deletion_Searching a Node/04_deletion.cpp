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

node* minVal(node* &root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

node* maxVal(node* &root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

node* deleteFromBST(node* &root, int val){
    if(root==NULL){
        return root;
    }

    if(root->data==val){

        //child 0
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        
        //child 1
        // case 1 left child
        if(root->left!=NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }

        //case 2 right child
        if(root->right!=NULL && root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }

        //child 2 
        // two types

        // 1st type
        // if(root->right!=NULL && root->left!=NULL){
        //     int mini=minVal(root->right)->data;
        //     root->data=mini;
        //     root->right=deleteFromBST(root->right,mini);
        //     return root;
        // }

        // 2nd type
        if(root->right!=NULL && root->left!=NULL){
            int maxi=maxVal(root->left)->data;
            root->data=maxi;
            root->left=deleteFromBST(root->left,maxi);
            return root;
        }

    }

    else if(val<root->data){
        root->left=deleteFromBST(root->left,val);
        return root;
    }

    else{
        root->right=deleteFromBST(root->right,val);
        return root;
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

    cout<<"Enter value you want to delete : ";
    int x;cin>>x;
    deleteFromBST(root,x);

    cout<<"After deletion : "<<endl;
    levelOrderTraversal(root);

    cout<<"inOrder : ";
    inOrderTraversal(root);  
    cout<<endl;
return 0;
}