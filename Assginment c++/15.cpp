// WAP to overload "area()" function to compute area of circle, rectangle, triangle and 
// square.

#include<iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}

int area(int l, int b){
    return l*b;
}

float area(float b, float h){
    return (b*h)/2;
}

int area(int s){
    return s*s;
}

int main(){
    float r;
    int length;
    int width;
    float height;
    float base;
    int side;
cout<<"Enter the radius of circle : ";
cin>>r;
cout<<"The area of circle is : "<<area(r)<<endl;

cout<<"Enter the length of rectangle : ";
cin>>length;
cout<<"Enter the width of rectangle : ";
cin>>width;
cout<<"The area of rectangle is : "<<area(length,width)<<endl;

cout<<"Enter the base of triangle : ";
cin>>base;
cout<<"Enter the height of triangle : ";
cin>>height;
cout<<"The area of triangle is : "<<area(base,height)<<endl;

cout<<"Enter the side of squre : ";
cin>>side;
cout<<"The area of squre is : "<<area(side)<<endl;
return 0;
}