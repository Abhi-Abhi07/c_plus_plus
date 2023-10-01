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
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node data : "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtMid(Node* &head, Node* &tail, int d, int pos){
    Node* temp=head;
    int cnt=1;

    // first pos ko handle kiya
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    // mid or last pos ko handle kiya
    while(cnt<(pos-1)){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        // tail ko shi place par set kiya
        insertAtTail(tail,d);
        return;
    }

    Node* nodToInsert=new Node(d);
    nodToInsert->next=temp->next;
    temp->next=nodToInsert;
}

void deletenod(int pos, Node* &head, Node* &tail){

    // deltion for first pos
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    // deletion mid or last pos
    else{
        Node* curr = head;
        Node* pre = NULL;
        int cnt=1;
        while(cnt<pos){
            pre=curr;
            curr=curr->next;
            cnt++;
        }
        pre->next=curr->next;
        if(curr->next==NULL){
            // tail ko shi place par set kiya
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
        
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){

    Node* nod1 = new Node(3);
    // cout<<n1->data<<endl;
    // cout<<n1->next<<endl; 
    
    Node* head=nod1;
    Node* tail=nod1;
    print(head);
    insertAtTail(tail,5);
    print(head);
    insertAtTail(tail,7);
    print(head);
    insertAtMid(head,tail,6,3);
    print(head);
    insertAtMid(head,tail,2,5);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    deletenod(5,head,tail);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
return 0;
}