#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;
    Node(int data){
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlen(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    head->pre=temp;
    temp->next=head;
   
    head=temp;
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->pre=tail;
    tail=temp;
}
void insertionatpos(Node* &head,Node* &tail, int pos, int d){
    
    if(pos==1){
        insertathead(head,d);
        return ;
    }
    Node* temp=head;
    int count=1;
    while(count<(pos-1)){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }
    //middle pos ke liye
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->pre=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->pre=temp;
}

int main(){
Node* nod1=new Node(10);
Node* head=nod1;
Node* tail=nod1;
// Node* head=NULL;
// Node* tail=NULL;
print(head);
cout<<getlen(head)<<endl;
insertattail(tail,1);
print(head);
insertattail(tail,56);
print(head);
insertattail(tail,34);
print(head);
insertionatpos(head,tail,5,5);
print(head);
cout<<tail->data<<endl;
cout<<head->data<<endl;
return 0;
}