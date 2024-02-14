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

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    cout<<" q size "<<q.size()<<endl;
    q.push(NULL);
    cout<<" q size "<<q.size()<<endl;
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

void rlt(node* root){
    queue<node*>q;
    stack<node*>s;
    q.push(root);
    s.push(root);
    q.push(NULL);
    s.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){//purana level complete travers ho gya
            cout<<endl;
            if(!q.empty()){//queue has some still child node
                q.push(NULL);
                s.push(NULL);
            }
        }
        else{
            // cout<<temp->data<<" "; 
            if(temp->left){
                q.push(temp->left);
                s.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
                s.push(temp->right);
            }
        }
    }
    while(!s.empty()){
        if(s.top()==NULL){
            cout<<endl;
        }
        else{
            cout<<s.top()->data<<" ";
        }
        s.pop();
    }
}
void reverseLevelorderTraversal(node* root){
    queue<node*>q;
    stack<int>s;
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        s.push(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){

    node* root=NULL;
    cout<<"Enter data :- "<<endl;
    root=buildBinaryTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"level order traversal :- "<<endl;
    levelOrderTraversal(root);
    cout<<"rlt"<<endl;
    rlt(root);
    cout<<endl;
    cout<<"Reverse level order traversal :- "<<endl;
    reverseLevelorderTraversal(root);
    

return 0;
}