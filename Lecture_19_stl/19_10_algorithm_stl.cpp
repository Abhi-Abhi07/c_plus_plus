#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

vector<int>v;
v.push_back(2);
v.push_back(5);
v.push_back(7);
v.push_back(8);
v.push_back(10);

for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

cout<<"Finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;
cout<<"Finding 5 : "<<binary_search(v.begin(),v.end(),5)<<endl;
cout<<"Finding 3 : "<<binary_search(v.begin(),v.end(),3)<<endl;

cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;

cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),1)-v.begin()<<endl;
cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;

int a=4; 
int b=7;
cout<<"max number is : "<<max(a,b)<<endl;
cout<<"min number is : "<<min(a,b)<<endl;

swap(a,b);
cout<<"a --> "<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"String --> "<<abcd<<endl;

rotate(v.begin(),v.begin()+2,v.end());
cout<<"After rotate "<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;

sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;


return 0;
}