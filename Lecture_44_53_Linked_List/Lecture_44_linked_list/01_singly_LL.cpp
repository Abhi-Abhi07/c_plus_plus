#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* ptr;
    Node(int data){
        this->data=data;
        this->ptr=NULL;
    }
};
int main(){
Node* n1=new Node(5);
cout<<n1->data<<endl;
cout<<n1->ptr<<endl;;
return 0;
}