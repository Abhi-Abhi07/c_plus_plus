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
void insertattail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &tail){
    Node* temp=tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
Node* nod1=new Node(10);

// head pointed to nod1
Node* head=nod1;

// tail pointed to nod1
Node* tail=nod1;
print(head);
insertattail(tail, 12);
print(head);
insertattail(tail, 15);
print(head);

return 0;
}