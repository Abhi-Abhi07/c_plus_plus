// WAP to create a class "student" consist of name and roll number. Create an another class 
// "test" consist of of marks of two subjects that inherits the "student" class. Create an 
// another class "result" consist of total that contains the sum of marks of the two subjects 
// and inherits the "test" class. Each class consist of member functions for input and output. 

#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll_number;
    void set_data(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no. : ";
        cin>>roll_number;
    }
    void get_data(){
        cout<<"Student detials !"<<endl;
        cout<<"student name is : "<<name<<endl;
        cout<<"Roll number is : "<<roll_number<<endl;
    }
};
class test: public student{
    public:
    int math;
    int cpp;
    void setdata(){
        set_data();
        cout<<"Enter the math marks : ";
        cin>>math;
        cout<<"Enter the cpp marks : ";
        cin>>cpp;
    }
    void display(){
        get_data();
        cout<<"math marks is : "<<math<<endl;
        cout<<"cpp marks is : "<<cpp<<endl;
    }
};
class result: public test{
    public:
    int sum;
    int getsum(int math, int cpp){
        sum=math+cpp;
        return sum;
    }
    void markssum(){
        getsum(math,cpp);
        cout<<"Sum of marks is : "<<sum<<endl;
    }
};
int main(){
result st;
int total;
cout<<"Enter the number of student : ";
cin>>total;
for(int i=0; i<total; i++){
st.setdata();
st.display();
st.markssum();
}
return 0;
}