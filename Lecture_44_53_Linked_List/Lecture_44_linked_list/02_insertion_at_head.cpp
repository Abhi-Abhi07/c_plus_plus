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
void insertathead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
Node* nod1=new Node(10);
// cout<<nod1->data<<endl;
// cout<<nod1->next<<endl;

// head pointed to nod1
Node* head=nod1;
print(head);
insertathead(head, 12);
print(head);
insertathead(head, 15);
print(head);
return 0;
}