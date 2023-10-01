// WAP to create two base classes each consist of a integer number and create an another 
// class that consist of a integer number that stores the multiplication of the two numbers 
// inherited from the base classes. Each class consist of member functions for input and 
// output. 

#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void seta(){
        cout<<"Enter number : ";
        cin>>a;
    }
};
class B{
    public:
    int b;
    void setb(){
        cout<<"Enter number : ";
        cin>>b;
    }
};
class C: public A, public B{
    public:
    int mul;
    int getmul(int a, int b){
        mul=a*b;
        return mul;
    }
    void display(){
        cout<<"A is : "<<a<<endl;
        cout<<"B is : "<<b<<endl;
        cout<<"Multiplication of a*b : "<<getmul(a,b)<<endl;
    }
};
int main(){
C obj;
obj.seta();
obj.setb();
obj.display();
return 0;
}