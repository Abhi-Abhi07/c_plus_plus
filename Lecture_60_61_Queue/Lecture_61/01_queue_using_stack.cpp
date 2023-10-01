#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    int n;
    stack<int>s1;
    stack<int>s2;
    public:
    Queue(){
        n=0;
    }
    void push(int val){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(val);
        n++;
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        s1.pop();
        n--;
    }
    int size(){
        return n;
    }
    int front(){
        return s1.top();
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.push(2);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
return 0;
}