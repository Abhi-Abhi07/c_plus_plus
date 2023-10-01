// WAP to create a class “Base” consist of a number, a constructor and a virtual function 
// display(). Create an another class “Derived” that inherits the “Base” class and consist of a 
// number, a constructor and a function that overrides the virtual function display().Create a 
// base class pointer to achieve dynamic polymorphism. 

#include<iostream>
using namespace std;

class base{
    public:
    int x=10;
    base(){
        cout<<"Constructor of base class"<<endl;
    }
    virtual void display(){
        cout<<"displaying base class "<<"x = "<<x<<endl;
    }
};

class derived: public base{
    public:
    int y=100;
    derived(){
        cout<<"constructor of derived class"<<endl;
    }
    void display(){
        cout<<"displaying derived class "<<"y = "<<y<<endl;
    }
};

int main(){
base *b;
derived d;
b=&d;
d.display();
b->display();
return 0;
}