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
void buildTreeFromlevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root node : ";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
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
void moriesInr(node* root){
    node* curr=root;
    while(curr!=NULL){
        if(curr->left){
            node* pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            } 
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;
            }
            else{
                cout<<curr->data<<" ";
                pred->right=NULL;
                curr=curr->right;
            }
        }
        else{
            cout<<curr->data<<" ";
            curr=curr->right;
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

void moriesPre(node* root){
    node* curr=root;
    while(curr!=NULL){
        if(curr->left){
            node* pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            } 
            if(pred->right==NULL){
                pred->right=curr;
                cout<<curr->data<<" ";
                curr=curr->left;
            }
            else{
                pred->right=NULL;
                curr=curr->right;
            }
        }
        else{
            cout<<curr->data<<" ";
            curr=curr->right;
        }
    }
}
int main(){
    node* root=NULL;
    buildTreeFromlevelOrder(root);
    // 1 2 3 4 5 -1 6 -1 7 -1 -1 -1 -1 -1 -1
    // levelOrderTraversal(root);
    inOrderTraversal(root);
    cout<<endl;
    moriesInr(root);

    cout<<endl<<endl;
    preOrderTraversal(root);
    cout<<endl;
    moriesPre(root);
return 0;
}