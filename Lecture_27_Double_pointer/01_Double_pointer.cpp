#include<iostream>
using namespace std;

int main(){

int i=5;
int *ptr=&i;
int **ptr2=&ptr;

cout<<"1 is : "<<i<<endl;
cout<<"2 is : "<<&i<<endl;

cout<<"3 is : "<<ptr<<endl;
cout<<"4 is : "<<*(&ptr)<<endl;
cout<<"5 is : "<<&ptr<<endl;
cout<<"6 is : "<<*ptr<<endl;

cout<<"7 is : "<<ptr2<<endl;
cout<<"8 is : "<<&ptr2<<endl;
cout<<"9 is : "<<*(&ptr2)<<endl;
cout<<"10 is : "<<*ptr2<<endl;
cout<<"11 is : "<<**ptr2<<endl;
cout<<"12 is : "<<*(**(&ptr2))<<endl;
cout<<"12 is : "<<(**(&ptr2))<<endl;

return 0;
}