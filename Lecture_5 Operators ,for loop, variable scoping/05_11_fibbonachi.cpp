#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter any number "<<endl;
cin>>n;
int a=0;
int b=1;
cout<<a<<endl<<""<<b<<endl;
for(int i=3; i<=n; i++){
    int fibb=a+b;
    cout<<fibb<<endl;
    a=b;
    b=fibb;
}
return 0;
}