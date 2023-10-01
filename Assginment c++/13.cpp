// WAP to create a base class "person" consist of name and age. Create derived classes 
// "teacher" consist of post and "student" consist of standard. Each class consist of member 
// functions for input and output.

#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
};
class teacher: public person{
    public:
    char post[20];
    void setdata(){
        cout<<"Enter name of teacher : ";
        cin>>name;
        cout<<"Enter age of teacher : ";
        cin>>age;
        cout<<"Enter post of teacher : ";
        cin>>post;
    }
    void display(){
        cout<<"Teacher Detials !"<<endl;
        cout<<"Teacher name is "<<name<<endl;
        cout<<"Teacher age is : "<<age<<endl;
        cout<<"Teacher post is : "<<post<<endl;
    }
};

class student: public person{
    public:
    int standard;
    void setdata(){
         cout<<"Enter name of student : ";
        cin>>name;
        cout<<"Enter age of student : ";
        cin>>age;
        cout<<"Enter standard of student : ";
        cin>>standard;
    }
    void display(){
        cout<<"Student Detials !"<<endl;
        cout<<"Student name is "<<name<<endl;
        cout<<"Student age is : "<<age<<endl;
        cout<<"Student standard is : "<<standard<<endl;
    }
};

int main(){
    teacher t;
    t.setdata();
    t.display();
    student s;
    s.setdata();
    s.display();


return 0;
}