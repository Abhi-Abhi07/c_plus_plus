#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(3);
    q.push(5);
    q.push(8);
    q.pop();
    q.pop();

    cout<<"Empty or not : "<<q.empty()<<endl;

    cout<<"front element : "<<q.front()<<endl;
    cout<<"size : "<<q.size()<<endl;

return 0;
}