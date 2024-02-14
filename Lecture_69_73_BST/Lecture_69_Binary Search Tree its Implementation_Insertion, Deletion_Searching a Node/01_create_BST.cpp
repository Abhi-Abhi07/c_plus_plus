#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* bst(int data,Node* root){
    if(root==NULL){
        Node* root=new Node(data);
        return root;
    }
    if(root->data>data){
        root->left=bst(data,root->left);
    }
    else{
        root->right=bst(data,root->right);
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=bst(data,root);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){//purana level complete travers ho gya
            cout<<endl;
            if(!q.empty()){//queue has some still child Node
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

void inOrderTraversal(Node* root){
    
    //base case
    if(root==NULL){
        return;
    }

    //rr
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

void preOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }

    //rr
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void postOrderTraversal(Node* root){
    //base case
    if(root==NULL){
        return;
    }

    //rr
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int minVal(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}

int maxVal(Node* root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}

int inOrderPredecesor(Node* root,int key){
    int ans=-1;
    while(root){
        if(root->data>=key){
            root=root->left;
        }
        else{
            ans=root->data;
            root=root->right;
        }
    }
    return ans;
}

int inOrderSuccessor(Node* root,int key){
    int ans=-1;
    while(root){
        if(root->data<=key){
            root=root->right;
        }
        else{
            ans=root->data;
            root=root->left;
        }
    }
    return ans;
}

Node* deleteFromBST(Node* root,int key){
    if(root==NULL){
        return root;
    }
    if(root->data==key){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //  1 child

        // left part non NULL
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        // right part non NULL
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child (2 way)
        if(root->left!=NULL && root->right!=NULL){
            // // first way
            // int mini=minVal(root->right);
            // root->data=mini;
            // root->right=deleteFromBST(root->right,mini);
            // return root;

            // second way
            int maxi=maxVal(root->left);
            root->data=maxi;
            root->left=deleteFromBST(root->left,maxi);
            return root;
        }
    }
    else if(key<root->data){
        root->left=deleteFromBST(root->left,key);
    }
    else{
        root->right=deleteFromBST(root->right,key);
    }
}
int main(){
    Node* root=NULL;
    cout<<"Enter data for inserting in BST : "<<endl;
    takeInput(root);

    // 10 8 21 7 27 5 4 3 -1
    // 10 7 21 22 15 5 4 6 11 -1 
    // 25 20 36 10 22 30 40 5 12 28 38 48 3 8 15 45 50 -1
    cout<<"printing level order traversal in BST :- "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Printting inOrder :- "<<endl;
    inOrderTraversal(root);

    cout<<endl<<"Printting preOrder :- "<<endl;
    preOrderTraversal(root);

    cout<<endl<<"Printting postOrder :- "<<endl;
    postOrderTraversal(root);

    cout<<endl<<"Minimum value of BST is : "<<minVal(root)<<endl;
    cout<<"Maximum value of BST is : "<<maxVal(root)<<endl;
    
    cout<<endl<<"In order predecessor : "<<inOrderPredecesor(root,20)<<endl;
    cout<<"In order successor : "<<inOrderSuccessor(root,20)<<endl;

    cout<<endl<<"After deletion "<<endl;
    root=deleteFromBST(root,40);

    cout<<endl<<"printing level order traversal in BST :- "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Printting inOrder :- "<<endl;
    inOrderTraversal(root);
return 0;
}