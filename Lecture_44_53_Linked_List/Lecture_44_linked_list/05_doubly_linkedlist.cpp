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
Node* insertAtHead(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        head->pre=temp;
        temp->next=head;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->pre=tail;
        tail=temp;
    }
}
void insertAtMddle(Node* &head,Node* &tail, int pos, int d){
    
    if(pos==1){
        insertAtHead(head,tail,d);
        return ;
    }
    Node* temp=head;
    int count=1;
    while(count<(pos-1)){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
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
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,6);
    print(head);
    // cout<<"head->data : "<<head->data<<endl;
    // cout<<"tail->data : "<<tail->data<<endl;
    insertAtHead(head,tail,8);
    print(head);
    // cout<<"head->data : "<<head->data<<endl;
    // cout<<"tail->data : "<<tail->data<<endl;
    insertAtHead(head,tail,10);
    print(head);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,5);
    print(head);
    cout<<"head->data : "<<head->data<<endl;
    cout<<"tail->data : "<<tail->data<<endl;
    insertAtMddle(head,tail,7,20);
    print(head);
    cout<<"head->data : "<<head->data<<endl;
    cout<<"tail->data : "<<tail->data<<endl;
    insertAtMddle(head,tail,1,30);
    print(head);
    cout<<"head->data : "<<head->data<<endl;
    cout<<"tail->data : "<<tail->data<<endl;
    insertAtMddle(head,tail,5,50);
    print(head);
    cout<<"head->data : "<<head->data<<endl;
    cout<<"tail->data : "<<tail->data<<endl;
    cout<<"length is : "<<getlen(head)<<endl;
return 0;
}