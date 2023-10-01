#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int>s;
s.push(6);
s.push(4);
s.push(5);

s.pop();
cout<<"printing top element : "<<s.top()<<endl;
if(s.empty()){
    cout<<"stack is empty !"<<endl;
}
else{
    cout<<"Not empty kya are stack"<<endl;
}
return 0;
}