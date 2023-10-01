#include<iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"a"<<endl;
    }
};

class B{
    public:
    void a(){
        cout<<"b"<<endl;
    }
};

class C: public A, public B{
    
};

int main(){

    C obj;
    obj.A::a();
    obj.B::a();

return 0;
}