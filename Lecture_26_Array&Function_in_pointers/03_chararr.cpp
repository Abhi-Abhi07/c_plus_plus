#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
char ch[6]="abcde";

cout<<arr<<endl;//print address
cout<<ch<<endl;//print entire string


//char arr and int arr ke cout function me difference hota he
int *pt=arr;
char *ptr=ch;

cout<<pt<<endl;//print address
cout<<ptr<<endl;//Entire stirng print karta he

cout<<*ptr<<endl;
cout<<&ptr<<endl;

char c='z';
char *p=&c;
// jab tk null char nhi milta tab tk garbage value print hogi
cout<<p<<endl;
return 0;
}