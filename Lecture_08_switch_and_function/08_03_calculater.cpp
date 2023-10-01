#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"Enter the value of a ";
cin>>a;
cout<<"Enter the value of b ";
cin>>b;
char op;
cout<<"Enter the operator you want to perform : "<<endl;
cin>>op;
switch(op){
    case '+': cout<<"sum = "<<a+b<<endl;
    break;
    case '-': cout<<"sub = "<<a-b<<endl;
    break;
    case '*': cout<<"mul = "<<a*b<<endl;
    break;
    case '/': cout<<"div = "<<a/b<<endl;
    break;
    case '%': cout<<"rem = "<<a%b<<endl;
    break;
    default : cout<<"Enter a valid operation"<<endl;
}
return 0;
}