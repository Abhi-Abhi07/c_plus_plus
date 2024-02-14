#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int data;
    int row;
    int col;
    node(int data,int row , int col){
        this->data=data;
        this->row=row;
        this->col=col;
    }
};
class compar{
    public:
    bool operator()(node* a,node* b){
        // if(a->data)
        //     cout<<"a -> "<<a->data<<endl;
        // if(b->data)
        //     cout<<"b -> "<<b->data<<endl;

        return  a->data > b->data;
    }
};
bool compare(int a,int b){
    return a>b;
}
int main(){
    
    int arr[3][3]={4,5,6,7,8,9,13,11,16};
    // 4  5   6
    // 7  8   9
    // 0  11  16
    priority_queue<node*,vector<node*>, compar>pq;
    for(int i=0; i<3;i++){
        node* temp=new node(arr[i][0],i,0);
        pq.push(temp);
    }
    cout<<"-> "<<pq.top()->data<<endl;

    // int a=4;
    // int b=6;
    // int c=5;

    // vector<int>v1;
    // vector<int>v2;

    // v1.push_back(4);
    // v1.push_back(6);
    // v1.push_back(5);

    // for(auto i:v1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // sort(v1.begin(),v1.end(),compare);
    // for(auto i:v1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
return 0;
}