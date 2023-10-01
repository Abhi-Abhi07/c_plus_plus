#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    public:
    void bark(){
        cout<<"barking!"<<endl;
    }
};

class Human{
    public:
    string colour;
    public:
    void speak(){
        cout<<"Speaking!\n";
    }
};

class multiple: public Animal, public Human{

};
int main(){

multiple m;

m.age;
m.speak();
m.bark();
return 0;
}