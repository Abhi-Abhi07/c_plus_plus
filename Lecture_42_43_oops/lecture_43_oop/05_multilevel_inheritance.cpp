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

class Germansharped: public Dog{

};

class Paltu: public Germansharped{

};
int main(){

Dog d;
d.age=10;
cout<<d.age<<endl;
d.speak();

Germansharped g;
// g.age=30;
cout<<g.age<<endl;
g.speak();

Paltu p;
// p.age=(8);
cout<<p.age<<endl;
p.speak();
return 0;
}