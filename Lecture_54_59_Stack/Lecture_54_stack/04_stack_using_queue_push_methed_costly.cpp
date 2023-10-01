#include<iostream>
#include<queue>
using namespace std;
class Stack{
    int n;
    queue<int>q1;
    queue<int>q2;
    public:
    Stack(){
        n=0;
    }
    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        n--;
    }
    int size(){
        return n;
    }
    int top(){
        return q1.front();
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
    cout<<st.top();

}