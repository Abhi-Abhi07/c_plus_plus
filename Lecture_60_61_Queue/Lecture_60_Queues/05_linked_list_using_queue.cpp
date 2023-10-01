#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }

        ~node(){
        int value=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node data : "<<value<<endl;
    }
};

void push(int d,node* &head,node* &tail){
    node* temp=new node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void pop(node* &head,node* &tail){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
}

bool isEmpty(node* &head,node* &tail){
    if(head==tail){
        return true;
    }
    return false;
}

int main(){
    node* head=NULL;
    node* tail=NULL;

    push(3,head,tail);
    cout<<"1 push() ---"<<head->data<<" "<<tail->data<<endl;
    push(5,head,tail);
    cout<<"2 push() ---"<<head->data<<" "<<tail->data<<endl;
    push(7,head,tail);
    cout<<"3 push() ---"<<head->data<<" "<<tail->data<<endl;

    pop(head,tail);
    pop(head,tail);
    pop(head,tail);

    cout<<isEmpty(head,tail)<<endl;
return 0;
}