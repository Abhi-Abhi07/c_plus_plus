#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    int height;

    int getweight(){
        return this->weight;
    }

    int setage(int a){
        return this->age=a;
    }

};

//base class ke data member & function are public
class male: public Human//1.(public)
// class male: protected Human//2.(protected)only accces base & child class
// class male: private Human//3.(private)only accces base & child class

//base class ke data member & function are protected
// class male: public Human//4.(protected)only acces base & child class
// class male: protected Human//5.(protected)only acces base & child class
// class male: private Human//6.(private)acces inside class

//base class ke data member & function are private
// class male: public Human//7.(not accesiable)
// class male: protected Human//8.(not accesiable)
// class male: private Human//9.(not accesiable)

{
    public:
    string colour;
    
    void attack(){
        cout<<"right\n";
    }
    int getage(){
        return this->age;
    }
};

int main(){

male obj1;

// 1
cout<<obj1.age<<endl;
cout<<obj1.getage()<<"\n";

// 2
// // cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access kar sakte hai

// 3
// // cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access kar sakte hai

// 4
// cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access kar sakte hai

// 5
// // cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access kar sakte hai

// 6
// // cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access kar sakte hai

// 7 ,8, 9
// cout<<obj1.age<<endl; // access nhi kar sakte
// cout<<obj1.getage()<<"\n"; // access nhi kar sakte hai
return 0;
}