#include<iostream>
using namespace std;

int main(){
int i=5;

int *p=&i;

cout<<"before *p : "<<*p<<endl;
*p=*p+1;
cout<<"After *p : "<<*p<<endl;

cout<<"before p : "<<p<<endl;
p=p+1;
cout<<"After p : "<<p<<endl;
cout<<"size : "<<sizeof(p)<<endl;

char ch='a';
char *pt=&ch;
cout<<"before *p : "<<*pt<<endl;
*pt=*pt+1;
cout<<"After *p : "<<*pt<<endl;

cout<<"before p : "<<int(pt)<<endl;
pt=pt+1;
cout<<"After p : "<<int(pt)<<endl;

return 0;
}