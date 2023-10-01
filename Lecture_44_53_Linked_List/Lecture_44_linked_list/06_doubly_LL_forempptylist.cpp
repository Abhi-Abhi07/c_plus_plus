#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }

    // destruster
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node data : "<<value<<endl;
    }
};

// Traverse of LL
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

// length of LL
int getlength(Node* head){

    // pass by reference ke case me
    // Node* temp=head;
    // int len=0;
    // while(temp!=NULL){
    //     len++;
    //     temp=temp->next;
    // }
    // return len;


    // pass by value ke case me
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

// inserting first pos
void insertAtHead(Node* &head,Node* &tail, int d){

    //empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp = new Node(d);
    
        temp->next=head;
        head->pre=temp;
        head = temp;
    }
}

// inserting last pos
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail==NULL){
        //empty list
        Node* temp = new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp = new Node(d);
        
        temp->pre=tail;
        tail->next=temp;
        tail=temp;
    }
}

void insertAtpos(Node* &head, Node* &tail, int pos, int d){
    Node* temp=head;
    int cnt=1;

    // first pos ko handle kiya
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }

    // mid or last pos ko handle kiya
    while(cnt<(pos-1)){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        // tail ko shi place par set kiya
        insertAtTail(head,tail,d);
        return;
    }

    //middle pos
    Node* nodToInsert=new Node(d);
    nodToInsert->next=temp->next;
    temp->next->pre=nodToInsert;
    temp->next=nodToInsert;
    nodToInsert->pre=temp;
}

void deletenod(int pos, Node* &head, Node* &tail){

    // deltion for first pos
    if(pos==1){
        Node* temp=head;
        temp->next->pre=NULL;
        head=temp->next;
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
        curr->pre=NULL;
        pre->next=curr->next;
        if(curr->next==NULL){
            // tail ko shi place par set kiya
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
        
    }
}

int main(){
    // Node* nod1=new Node(10);
    // Node* head=nod1;
    // Node* tail=nod1;
    
    //empty  list
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    cout<<"Length : "<<getlength(head)<<endl;
    insertAtHead(head,tail,3);
    print(head);
    insertAtHead(head,tail,2);
    print(head);
    insertAtTail(head,tail,7);
    print(head);
    insertAtpos(head,tail,4,10);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    deletenod(4,head,tail);
    print(head);
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;

return 0;
}