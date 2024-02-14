#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //Destructor
    ~Node(){
        int value=this->data;
        while(this->next!=NULL){
            cout<<"Abhishek"<<endl;
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node data : "<<value<<endl;
    }
};
void insertAthead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
}
void insertAtTail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
}

void insertAtMiddle(Node* &head,Node* &tail,int pos,int element){
    Node* temp=head;
    if(pos==1){
        // first pos ko handle kiya
        insertAthead(head,element);
            return;
    }
    // mid or last pos ko handle kiya
    for(int i=2; i<pos; i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        // tail ko shi place par set kiya
        insertAtTail(tail,element);
        return;
    }
    Node* curr=new Node(element);
    curr->next=temp->next;
    temp->next=curr;
}

void deleteNodePosWise(Node* &head,Node* &tail,int pos){
    if(pos==1){
        // deltion for first pos
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
    }
    else{
        Node* pre=head;
        // deletion mid or last pos
        for(int i=1; i<pos-1; i++){
            pre=pre->next;
        }
        Node* curr=pre->next;
        pre->next=curr->next;
        if(curr->next==NULL){
            // tail ko shi place par set kiya
            tail=pre;
        }
        curr->next=NULL;
        delete(curr);
    }
}

void deleteNodeElementWise(Node* &head,Node* &tail,int element){
    if(head->data==element){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return;
    }
    Node* pre=head;
    while(pre->next->data!=element){
        pre=pre->next;
    }
    Node* curr=pre->next;
    pre->next=curr->next;
    if(curr->next==NULL){
        tail=pre;
    }else{
    curr->next=NULL;
    }
    delete(curr);
}

void print(Node* head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* nod=new Node(10);
    Node* head=nod;
    insertAthead(head,14);
    print(head);
    insertAthead(head,16);
    print(head);
    insertAthead(head,18);
    print(head);
    Node* tail=nod;
    insertAtTail(tail,11);
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,13);
    print(head);
    insertAtMiddle(head,tail,3,33);
    print(head);
    insertAtMiddle(head,tail,1,30);
    print(head);
    insertAtMiddle(head,tail,10,40);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    deleteNodePosWise(head,tail,5);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    deleteNodeElementWise(head,tail,40);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
return 0;
}