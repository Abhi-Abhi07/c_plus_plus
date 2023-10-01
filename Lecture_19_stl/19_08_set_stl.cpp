#include<iostream>
#include<set>
using namespace std;

int main(){
    //set
    //unique element 
    //element are sorted way
    //element modification not possible only insertion and deletetion

    //unorder set
    //element are not sorted way
set<int> s;

s.insert(2);//complexity O(log n)
s.insert(5);
s.insert(6);
s.insert(6); 
s.insert(0);
s.insert(6);
s.insert(2);
s.insert(2);

for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;

set<int>::iterator it=s.begin();
it++;
s.erase(it);//complexity O(log n)
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;

cout<<"2 present or not : "<<s.count(2)<<endl;//complexity O(log n)
cout<<"5 present or not : "<<s.count(5)<<endl;
cout<<"6 present or not : "<<s.count(6)<<endl;

set<int>::iterator itr=s.find(5);//complexity of find O(log n)
for(auto it=itr; it!=s.end(); it++){
    cout<<*it<<" ";
}
return 0;
}