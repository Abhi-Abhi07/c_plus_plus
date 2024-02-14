#include<iostream>
#include<queue>
#include<vector>
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

Node* inrTobst(int s,int e,vector<int>inr){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    Node* temp=new Node(inr[mid]);
    temp->left=inrTobst(s,mid-1,inr);
    temp->right=inrTobst(mid+1,e,inr);
    return temp;
}

void bstToLL(Node* root,Node* &head){
    if(root==NULL){
        return;
    }
    bstToLL(root->right,head);
    root->right=head;
    if(head){//make sure ki head he ya nhi
        head->left=root;
    }
    head=root;
    bstToLL(root->left,head);
}

Node* mergeTwoLL(Node* head1,Node* head2){
    Node* head=NULL;
    Node* tail=NULL;
    while(head1 && head2){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
    }
    while(head1){
        if(head==NULL){
            head=head1;
            tail=head1;
            head1=head1->right;
        }
        else{
            tail->right=head1;
            head1->left=tail;
            tail=head1;
            head1=head1->right;
        }
    }
    while(head2){
        if(head==NULL){
            head=head2;
            tail=head2;
            head2=head2->right;
        }
        else{
            tail->right=head2;
            head2->left=tail;
            tail=head2;
            head2=head2->right;
        }
    }
    return head;
}
int countNodes(Node* head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->right;
    }
    return cnt;
}
Node* sortedLLTobst(Node* &head,int n){
    if(n<=0 || head==NULL){
        return NULL;
    }
    Node* left=sortedLLTobst(head,n/2);
    Node* root=head;
    root->left=left;
    head=head->right;
    root->right=sortedLLTobst(head,n-(n/2)-1);
    return root;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}
int main(){

    vector<int>v1,v2;
    v1.push_back(1);
    v1.push_back(5);
    v1.push_back(9);
    v1.push_back(11);
    v1.push_back(15);
    v2.push_back(3);
    v2.push_back(7);
    v2.push_back(13);
    v2.push_back(18);

    Node* root1=inrTobst(0,v1.size()-1,v1);
    Node* root2=inrTobst(0,v2.size()-1,v2);

    Node* head1=NULL;
    bstToLL(root1,head1);
    head1->left=NULL;
    
    // print(head1);
    Node* head2=NULL;
    bstToLL(root2,head2);
    head2->left=NULL;

    Node* head=mergeTwoLL(head1,head2);
    print(head);
    Node* root=sortedLLTobst(head,countNodes(head));

    levelOrderTraversal(root);
    inOrderTraversal(root);
return 0;
}