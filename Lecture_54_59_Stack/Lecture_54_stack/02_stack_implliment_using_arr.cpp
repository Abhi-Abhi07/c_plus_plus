#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int *arr;
    int size;
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty";
        }
    }

    bool isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return -1;
        }
    }
};

int main(){

stack st(3);

st.push(23);
st.push(3);
st.push(53);

cout<<st.peak()<<endl;

return 0;
}