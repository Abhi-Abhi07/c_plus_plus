#include<iostream>
using namespace std;

class A{
    public:
    int b;
    void a(){
        cout<<"a"<<endl;
    }
};

class Z{
    public:
    void z(){
        cout<<"z"<<endl;
    }
};

class B: public A{

};

class C: public A, public Z{

};

int main(){

A obj1;
obj1.a();

Z obj26;
obj26.z();

B obj2;
obj2.a();

C obj3;
obj3.a();
obj3.z();

return 0;
}