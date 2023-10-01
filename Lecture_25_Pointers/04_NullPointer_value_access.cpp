#include<iostream>
using namespace std;

int main(){
int i=5;
int *ptr=&i;

cout<<ptr<<endl;
cout<<*ptr<<endl;

int *p=0;
p=&i;
cout<<p<<endl;
cout<<*p<<endl;

int n=5;
int a=n;
a++;
cout<<"Value of a is : "<<a<<endl;
cout<<"Value of n is : "<<n<<endl;

int *pt=&n;
cout<<"Before value of n is : "<<n<<endl;
(*pt)++;
cout<<"After value of n is : "<<n<<endl;

return 0;
}