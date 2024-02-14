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

void insert(Node* &tail,int element,int data){
   if(tail==NULL){
    Node* temp=new Node(data);
    tail=temp;
    tail->pre=tail;
    tail->next=tail;
    return;
   }
   if(tail->next==tail){
    Node* curr=new Node(data);
    curr->pre=tail->pre;
    curr->next=tail->next;
    tail->pre=curr;
    tail->next=curr;
    tail=curr;
    return ;
   }
    else{
    Node* temp=tail;
    while(temp->data!=element){
        temp=temp->next;
    }
    Node* curr=new Node(data);
    tail->pre=curr;
    curr->next=tail;
    temp->next=curr;
    curr->pre=temp;
    tail=curr;
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

int main(){

    Node* tail=NULL;
    insert(tail,5,3);
    insert(tail,3,5);
    insert(tail,3,8);
    insert(tail,3,2);
    insert(tail,3,11);
    print(tail);
return 0;
}