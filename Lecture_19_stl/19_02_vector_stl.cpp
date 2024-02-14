#include<iostream>
#include<bits\stdc++.h>
#include<vector>
using namespace std;

int main(){
    //dynamic because size more/upp ho sakta he
vector<int>v;
int arr[3]={1,2,3};
int arr2[3]={4,5,6};
vector<int>x(6);
copy(arr,arr+3,x.begin());
copy(arr2,arr2+3,x.begin()+3);
x.erase(x.begin()+2,x.begin()+3);
cout<<x.front()<<endl;
for(auto it:x){
    cout<<it<<" ";
}
cout<<endl;
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


cout<<endl<<endl;
vector<int>vec={1,2,3,4,5,6,7};
vec.pop_back();
cout<<vec.back()<<endl;
cout<<(0+3)%7<<endl;
rotate(vec.begin(),vec.begin()+3,vec.end());
for(auto i:vec){
    cout<<i<<" ";
}
return 0;
}