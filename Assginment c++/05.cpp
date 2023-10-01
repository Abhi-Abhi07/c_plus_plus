// WAP to make a function that swap values of two variables using the concept of reference 
// variable. 

#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){

int a,b;
cout<<"Enter the number : ";
cin>>a>>b;
cout<<"Before swaping a is "<<a<<" and b is "<<b<<endl;
swap(a,b);
cout<<"After swaping a is "<<a<<" and b is "<<b<<endl;
return 0;
}