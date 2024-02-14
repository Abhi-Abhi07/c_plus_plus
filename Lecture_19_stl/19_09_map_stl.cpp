#include<iostream>
#include<map>
using namespace std;

int main(){
//map sorted order and comlexity O(log n) because implementation red black tee or balance tee
//un_map random orderand comlexity O(1) because implementation heah table
map<int,string>m;

m[4]="A";
m[7]="B";
m[1]="C";
m.insert({14,"D"});
// map me value sorted order me rahti he
for(auto i:m){
    cout<<i.first<<"   "<<i.second<<endl;
}
cout<<endl;
m.insert({1,"a"});
cout<<m[1]<<endl;
m[1]="b";
cout<<m[1]<<endl;

// // m.find(7) returns an iterator pointing to the element in the map with key 7 if it exists.
// // If the key is not found, it returns m.end().
// if(m.find(7)==m.end()){
//     m[7]="AAAAAAAA";
// }
// cout<<"m[7]   "<<m[7]<<endl;
// if(m.find(7)!=m.end()){
//     m[7]="AAAAAAAA";
// }
// cout<<"m[7]   "<<m[7]<<endl;
// cout<<endl<<endl<<m[7]<<endl<<endl;
// if(m.find(5)!=m.end()){
//     m[5]="AAAAAAAA";
//     cout<<m[5]<<endl;
//     cout<<"ZZZZZZZZZZ"<<endl;
// }
// cout<<m[4]<<endl;





// cout<<"before erase"<<endl;
// for(auto i:m){
//     cout<<i.first<<" ";
// }
// cout<<endl;

// cout<<"4 present or not : "<<m.count(4)<<endl;
// cout<<"7 present or not : "<<m.count(7)<<endl;

// m.erase(4);
// cout<<"after erase"<<endl;
// for(auto i:m){
//     cout<<i.first<<" ";
// }
// cout<<endl;

// cout<<"4 present or not : "<<m.count(4)<<endl;
// cout<<"7 present or not : "<<m.count(7)<<endl;

// auto it=m.find(7);
// for(auto i=it; i!=m.end(); i++){
//     cout<<(*i).first<<" ";
// }
// cout<<endl;
 
return 0;
}