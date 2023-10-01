#include<iostream>
using namespace std;

int main(){
int arr[10]={23,122,41,67};
int *p=&arr[2];
cout<<"Address of first memory block : "<<arr<<endl;
cout<<"Address of first memory block : "<<&arr[0]<<endl;
cout<<"Address of second memory block : "<<&arr[1]<<endl;
cout<<"Address of third memory block : "<<p<<endl;

cout<<"Value of 0th index : "<<arr[0]<<endl;
cout<<"Value of 0th index : "<<*arr<<endl;

cout<<"Value is : "<<*arr+1<<endl;
cout<<"Value is : "<<*(arr+1)<<endl;

cout<<"Value is : "<<(*arr)+1<<endl;
cout<<"Value is : "<<*(arr)+1<<endl;

cout<<"Second index is : "<<arr[2]<<endl;
cout<<"Second index is : "<<*(arr+2)<<endl;

int i=3;
cout<<i[arr]<<endl;


return 0;
}