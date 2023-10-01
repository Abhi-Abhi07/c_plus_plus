#include<iostream>
#include<vector>
using namespace std;

int main(){
    //dynamic because size more/upp ho sakta he
vector<int>v;

vector<int>a(5,1);
cout<<"print a"<<endl;
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;

vector<int>last(a); // copy vector a in last
cout<<"print last"<<endl;
for(int i:last){
    cout<<i<<" ";
}
cout<<endl;

cout<<"Capacity : "<<v.capacity()<<endl;

v.push_back(1);
cout<<"Capacity : "<<v.capacity()<<endl;

v.push_back(2);
cout<<"Capacity : "<<v.capacity()<<endl;

v.push_back(3);
// capacity --> array memory allocation
cout<<"Capacity : "<<v.capacity()<<endl; 
// size --> total element of array
cout<<"Size --> "<<v.size()<<endl;

cout<<"Element at 2nd index : "<<v.at(2)<<endl;//random acces possible by the help of "at" opration

cout<<"before pop"<<endl;
for(int i:v){
    cout<<i;
}
cout<<endl;

v.pop_back();
cout<<"after pop"<<endl;
for(int i:v){
    cout<<i;
}
cout<<endl;

cout<<"before clear"<<endl;
cout<<"Capacity : "<<v.capacity()<<endl;
cout<<"Size --> "<<v.size()<<endl;
v.clear();
cout<<"After clear"<<endl;
cout<<"Capacity : "<<v.capacity()<<endl;
cout<<"Size --> "<<v.size()<<endl;

return 0;
}