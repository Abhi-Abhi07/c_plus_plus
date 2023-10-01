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
    ~Node(){
        int value=this->data;
        while(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Deleting data for value is : "<<value<<endl;
    }
};
void insertanode(Node* &tail,int element, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }
    else{
        Node* curr=tail;
        
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp =tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
}
void deletion(Node* &tail,int value){
    
    if(tail==NULL){
        cout<<"List is emty !"<<endl;
        return;
    }
    else{
        Node* pre=tail;
        Node* curr=pre->next;
        while(curr->data!=value){
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        //Node1 linked list
        if(curr==pre){
            tail=NULL;
        }
        //node>=2 Linked list
        else if(tail==curr){
            tail=pre;
        }
        curr->next=NULL;
        delete curr;
    }
}

bool isCicularList(Node* head){
    if(head==NULL){
        return true;
    }
    Node* pre=head; 
    do{
      if (pre == NULL) {
        return false;
        break;
      }
      pre = pre->next;
    }while(pre!=head);
    return true;
}
int main(){
Node* tail=NULL;
print(tail);
insertanode(tail,5,3);
print(tail);

insertanode(tail,3,5);
print(tail);
insertanode(tail,5,7);
print(tail);
insertanode(tail,7,9);
print(tail);
insertanode(tail,5,6);
print(tail);
insertanode(tail,9,10);
print(tail);

if(isCicularList(tail)){
    cout<<"List is cicular"<<endl;
}
else{
    cout<<"List is not cicular"<<endl;

}
return 0;
}