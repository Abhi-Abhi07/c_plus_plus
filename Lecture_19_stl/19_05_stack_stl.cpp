#include<iostream>
#include<stack>
using namespace std;

int main(){
//first in last out 
//or last in first out
//random acces not possible
stack<string>s;

s.push("A");
s.push("Abhi");
s.push("Abhishek");

cout<<"before pop"<<endl;
cout<<"Top element : "<<s.top()<<endl;
cout<<"Size --> "<<s.size()<<endl;

s.pop();
cout<<"after pop"<<endl;
cout<<"Top element : "<<s.top()<<endl;
cout<<"Size --> "<<s.size()<<endl;
cout<<"Empty or not : "<<s.empty();

return 0;
}