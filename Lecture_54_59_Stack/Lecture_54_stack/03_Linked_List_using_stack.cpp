#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
    void push(Node* &head,int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            return ;
        }
        else{
            temp->next=head;
            head=temp;
        }
    }

    void pop(Node* &head){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return ;
        }
        else{
            head=head->next;
        }
    }
    int peek(Node* &head){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else{
            return head->data;
        }
    }

    bool isEmpty(Node* &head){
        if(head==NULL){
            return 1;
        }
        else{
            // return -1;//bool ke case me -1 return nhi karte
            // bool -1 ko bhi true hi manta he
            return 0;
        }
    }

int main(){
    Node* head=NULL;

    push(head,4);
    push(head,5);
    push(head,6);

    if(peek(head)){
        cout<<"Top element is : "<<peek(head)<<endl;  
    }

    pop(head);

    cout<<"After pop"<<endl;
    if(peek(head)){
        cout<<"Top element is : "<<peek(head)<<endl;  
    }

    pop(head);
    pop(head);
    if(peek(head)){
        cout<<"Top element is : "<<peek(head)<<endl;  
    }
    if(isEmpty(head)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
return 0;
}