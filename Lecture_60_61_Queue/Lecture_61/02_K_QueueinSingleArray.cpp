#include<iostream>
using namespace std;

class KQueue{
    public:
    int n;
    int k;
    int freeslot;
    int *arr;
    int *next;
    int *front;
    int *rear;
    public:
    KQueue(int n, int k){
        this->n=n;
        this->k=k;
        arr=new int[n];

        front=new int[k];
        fill_n(front,k,-1);

        rear=new int[k];
        fill_n(rear,k,-1);

        next=new int[n];
        for(int i=0; i<n-1; i++){
            next[i]=i+1;
        }
        next[n-1]=-1;

        freeslot=0;

    }

    void push(int x, int qn){
        if(freeslot==-1){
            cout<<"No space available for insertion"<<endl;
            return;
        }
        //find index
        int index=freeslot;

        freeslot=next[index];

        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }
        rear[qn-1]=index;
        next[index]=-1;
        arr[index]=x;
    }
    int pop(int qn){
        if(front[qn-1]==-1){
            cout<<"queue "<<qn<<" is empty"<<endl;
            return -1;
        }
        int index=front[qn-1];
        front[index]=next[index];
        next[index]=freeslot;
        freeslot=index;
        return arr[index];
    }
};
int main(){
    KQueue q(5,3);
    q.push(1,1);
    q.push(2,1);
    q.push(3,2);
    q.push(4,2);
    q.push(5,1);

    cout<<q.pop(1)<<endl;
    cout<<q.pop(3)<<endl;
    cout<<q.pop(2)<<endl;
    // cout<<q.pop(1)<<endl;
    // cout<<q.pop(1)<<endl;

    
return 0;
}