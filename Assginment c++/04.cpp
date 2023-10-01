// WAP to create a class "employee" consist of name(char array), age(int), and salary(float) 
// and methods for input/output, enter the records for five faculty and four staff and print 

#include<iostream>
using namespace std;

class employee{
    char name[20];
    int age;
    float salary;
    public:
    void set_data(){
        cout<<"Enter the employee name : ";
        cin>>name;
        cout<<"Enter the age of employee : ";
        cin>>age;
        cout<<"Enter the salary of employee : ";
        cin>>salary;
    }
    void get_data(){
        cout<<"Employee name is : "<<name<<endl;
        cout<<"Employee age is : "<<age<<endl;
        
        cout<<"Employee salary is : "<<salary<<"Rs"<<endl;
    }
};

int main(){
employee e1,e2,e3,e4;

e1.set_data();
e2.set_data();
e3.set_data();
e4.set_data();

cout<<"*** Employee 1 Detials***"<<endl;
e1.get_data();
cout<<"*** Employee 2 Detials***"<<endl;
e2.get_data();
cout<<"*** Employee 3 Detials***"<<endl;
e3.get_data();
cout<<"*** Employee 4 Detials***"<<endl;
e4.get_data();
return 0;
}