// Given a binary search tree which is also a complete binary tree.
// The problem is to convert the given BST into a Min Heap with 
// the condition that all the values in the left subtree of a node 
// should be less than all the values in the right subtree of the node. 
// This condition is applied to all the nodes, in the resultant converted Min Heap. 

// Examples: 

// Input:           4
//               /    \
//              2      6
//             / \    / \
//            1   3  5   7  
// Output:         1
//               /   \
//              2      5
//            /  \    /  \
//           3    4  6    7 

#include<iostream>
#include<vector>
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
void inOrder(node* root,vector<int>&inr){
    if(root==NULL){
        return ;
    }
    inOrder(root->left,inr);
    inr.push_back(root->data);
    inOrder(root->right,inr);
}

void BSTToMinHeap(node* root, vector<int> arr, int &i)
{
    if (root == NULL)
        return;
    root->data = arr[i++];
    BSTToMinHeap(root->left, arr, i);
    BSTToMinHeap(root->right, arr, i);
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
int main(){
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(6);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(7);

    vector<int>arr;
    inOrder(root,arr);
    int size=arr.size();
    cout<<"Printing inr of Bst :- "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    vector<int>minhip(size);
    int i=0;
    BSTToMinHeap(root,arr,i);
    cout<<"level order printing for min heap :-"<<endl;
    levelOrderTraversal(root);
return 0;
}