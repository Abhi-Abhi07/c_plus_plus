#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"speaking\n";
    }
};

class Dog: public Animal{
    public:
    // void speak(){
    //     cout<<"Barking\n";
    // }
};

int main(){
Dog d;
d.speak();
return 0;
}