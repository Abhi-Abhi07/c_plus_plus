#include<iostream>
#include<queue>
using namespace std;

int main(){
    //first in first out
    //last in last out
queue<string>q;

queue<int>a;
a.push(1);
a.push(2);
a.push(3); 
a.push(3);
cout<<"Size of a : "<<a.size()<<endl;

cout<<"print a"<<endl;
cout<<"last element : "<<a.back()<<endl;
cout<<"First element : "<<a.front()<<endl;

cout<<"print n"<<endl;
queue<int>n(a);
cout<<"Size of n : "<<n.size()<<endl;
cout<<"First element : "<<n.front()<<endl;

q.push("A");
q.push("Abhi");
q.push("Abhishek");

cout<<"First element : "<<q.front()<<endl;
q.pop();
cout<<"First element after pop : "<<q.front()<<endl;
cout<<"Size : "<<q.size()<<endl;

cout<<"Empty or not "<<q.empty();

return 0;
}