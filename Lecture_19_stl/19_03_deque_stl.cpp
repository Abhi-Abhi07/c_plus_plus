#include<iostream>
#include<deque>
using namespace std;

int main(){
//multiple static array
//deque Insertion and deltetion both opreation perform 
//dynamic because size more/upp ho sakta he
deque<int>d;
 
d.push_back(1);
d.push_front(2);

cout<<"Element at 0th index : "<<d.at(0)<<endl;

for(int i:d){
    cout<<i<<" ";
}cout<<endl;

cout<<"Empty or not : "<<d.empty()<<endl;

// cout<<"Size before pop : "<<d.size()<<endl;
// d.pop_back();
// cout<<"Size after pop: "<<d.size()<<endl;

cout<<"before erase size : "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase size : "<<d.size()<<endl;

for(int i:d){
    cout<<"print element after erase : "<<i<<" ";
}cout<<endl;

cout<<"before clear size : "<<d.size()<<endl;
d.clear();
cout<<"after clear size : "<<d.size()<<endl;

cout<<"Empty or not : "<<d.empty()<<endl;

return 0;
}