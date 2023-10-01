#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int n=0; 
    queue<int>q1;
    queue<int>q2;
    public:
    Stack(){
        n=0;
    }
    void push(int val){
        q1.push(val);
        n++;
    }
    void pop(){
        if(q1.empty()){
            return;
        }
        for(int i=0; i<n-1; i++){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int>temp=q2;
        q2=q1;
        q1=temp;
    }
    int size(){
        return n;
    }
    int top(){
        if(q1.empty()){
            return;
        }
        // for(int i=0; i<n-1; i++){
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        
        // for(int i=0; i<n-1; i++){
        while(q1.size()!=1){
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.top()<<endl;;
    st.push(11);
    st.push(22);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
return 0;
}