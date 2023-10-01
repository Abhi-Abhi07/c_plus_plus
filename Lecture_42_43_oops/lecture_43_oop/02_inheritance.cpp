#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    int height;

    public:
    int getweight(){
        return this->weight;
    }

    int setage(int a){
        return this->age=a;
    }
};

class male: public Human{
    public:
    string colour;

    void attack(){
        cout<<"right\n";
    }
};

int main(){

male obj1;

obj1.age;
obj1.weight;
obj1.height;

cout<<obj1.age<<"\n";
cout<<obj1.weight<<"\n";
cout<<obj1.height<<"\n";
cout<<obj1.colour<<"\n";

cout<<obj1.setage(2)<<endl;
cout<<obj1.colour<<"\n";
obj1.attack();

return 0;
}