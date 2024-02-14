#include<iostream>
using namespace std;

int main(){

// pointer to int created and printing to some garbage value
// suppose kisi read only memory ko point kar liya or usse baad me update kar diya to gadbad 
// int *ptr;//Bad prctice
// cout<<"-->"<<*ptr<<endl;

int *p=0;//NUll Pointer
cout<<"- "<<p<<endl;
cout<<"- "<<*p<<endl;
cout<<"- "<<p<<endl;
cout<<"hi"<<endl;
return 0;
}