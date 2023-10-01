#include<iostream>
using namespace std;

int main(){
int num=5;
cout<<num<<endl;
cout<<"Address of num(5) is : "<<&num<<endl;

int *ptr=&num;
cout<<"Address is : "<<ptr<<endl;
cout<<"Value is : "<<*ptr<<endl;

double n=4.5;
double *p2=&n;
cout<<"Address is : "<<p2<<endl;
cout<<"Value is : "<<*p2<<endl;

char ch='A';
char *p3=&ch;
cout<<"Address is : "<<int(p3)<<endl;
cout<<"Value is : "<<*p3<<endl;

cout<<"Size of char is : "<<sizeof(ch)<<endl;
cout<<"Size of int is : "<<sizeof(num)<<endl;
cout<<"Size of double is : "<<sizeof(n)<<endl;

cout<<"Size of char pointer is : "<<sizeof(p3)<<endl;
cout<<"Size of int pointer is : "<<sizeof(ptr)<<endl;
cout<<"Size of double pointer is : "<<sizeof(p2)<<endl;
return 0;
}