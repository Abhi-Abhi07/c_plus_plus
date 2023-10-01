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
            return -1;
        }
    }

int main(){
    Node* head=NULL;

    push(head,4);

    push(head,5);

    cout<<"Top element is : "<<peek(head)<<endl;

    pop(head);

    cout<<"After pop"<<endl;
    cout<<"Top element is : "<<peek(head)<<endl;  

    pop(head);
    pop(head);

    if(isEmpty(head)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

return 0;
}