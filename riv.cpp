#include<iostream>
using namespace std;

int main(){
    int *ptr=0;
    int a=10;
    ptr=&a;
    // *ptr=a;//run time error
    cout<<*ptr<<endl;
return 0;
}