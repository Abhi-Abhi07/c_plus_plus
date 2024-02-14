#include<iostream>
#include<list>
using namespace std;

int main(){
    //random acces not posible
list<int>l;

list<int>n(5,100);
cout<<"print n"<<endl;
for(int i:n){
    cout<<i<<" ";
} 
cout<<endl;
list<int>a(n); //copy list n in list a;
cout<<"print a"<<endl;
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;
l.push_back(2);
l.push_front(1);

for(int i:l){
    cout<<i<<"\t";
}
cout<<endl;

cout<<"Size --> "<<l.size()<<endl;
l.erase(l.begin());
for(int i:l){
    cout<<"printing after erase : "<<i<<"\t";
}
cout<<endl;

l.pop_front();
for(int i:l){
    cout<<"printing after pop : "<<i<<"\t";
}
cout<<endl;
l.clear();
cout<<"Size after clear --> "<<l.size()<<endl;
return 0;
}