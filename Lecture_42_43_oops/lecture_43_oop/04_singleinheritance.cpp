#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking !\n";
    }
};

class Dog: public Animal{

};

int main(){

Dog d;
d.age=10;
cout<<d.age<<endl;
d.speak();
return 0;
}