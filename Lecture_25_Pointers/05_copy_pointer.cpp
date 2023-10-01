#include<iostream>
using namespace std;

int main(){
int i=5;
int *p=&i;
int *pt=p;

cout<<p<<" - "<<pt<<endl;
cout<<*p<<" - "<<*pt<<endl;

//Adress are difference 
cout<<&p<<" - "<<&pt<<endl;

return 0;
}