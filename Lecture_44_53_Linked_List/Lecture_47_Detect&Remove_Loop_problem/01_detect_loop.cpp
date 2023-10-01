#include<iostream>
#include<map>
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

bool detectCycle(Node* &head){
    if(head==NULL){
        return 0;
    }

    map<Node*,bool>visited;
    Node* temp=head;

    while(temp!=0){
        if(visited[temp]==1){
            cout<<"present element is : "<<temp->data<<endl;
            return 1;
        }
        visited[temp]=1;
        temp=temp->next;
    }
    return false;
}

Node* floyedCycle(Node* &head){
    if(head==NULL){
        return 0;
    }
    Node* s=head;
    Node* f=head;

    while(s!=0 && f!=0){
        f=f->next;
        if(f!=NULL){
            f=f->next;
        }
        s=s->next;
        if(s==f){
            cout<<"cycle present at : "<<s->data<<endl;
            return s;
        }
    }
    return 0;
}

Node* findStartingNode(Node* &head){
    Node* intersection=floyedCycle(head);
    Node* s=head;
    while(s!=intersection){
        s=s->next;
        intersection=intersection->next;
    }
    return s;
}

void removeOfLoop(Node* &head){
    if(head==NULL){
        return;
    }
    Node* startOfLoop=findStartingNode(head);
    Node* temp=startOfLoop;
    while(startOfLoop!=temp->next){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main(){

    Node* nod1 = new Node(3);

    Node* head=nod1;
    Node* tail=nod1;

    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtMid(head,tail,6,3);
    insertAtMid(head,tail,2,5);
    print(head);

    tail->next=head->next;

    // if(detectCycle(head)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    // if(floyedCycle(head)!=0){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    Node* loop=findStartingNode(head);
    cout<<"Starting Node of loop is : "<<loop->data<<endl;

    removeOfLoop(head);
    if(floyedCycle(head)!=0){
        cout<<"cycle is present"<<endl;
    }
    else{
        cout<<"cycle is not present"<<endl;
    }
    print(head);

return 0;
}