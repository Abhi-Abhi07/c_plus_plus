#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
class Queue {
    
public:
    int size;
    int qfront;
    int rear;
    int *arr;

public:
    Queue() {
        // Implement the Constructor
        size=100001;
        qfront=0;
        rear=0;
        arr=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear){
            return 1;
        }
        return 0;
    }

    void push(int data) {
        // Implement the enqueue() function
        if(rear==size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int pop() {
        // Implement the dequeue() function
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
                if(qfront==rear){
                    qfront=0;
                    rear=0;
                }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    int qsize(){
        return rear-qfront;
    }
};
int main(){
    Queue q;
    q.push(3);
    q.push(5);
    q.push(67);
    q.pop();
    q.pop();
    cout<<"front element : "<<q.front()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is empty !"<<endl;
    }
    else{
        cout<<"Queue is not empty !"<<endl;
    }

    cout<<q.qsize()<<endl;

return 0;
}