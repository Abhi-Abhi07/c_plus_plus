// WAP to create a class “shape” consist of name and sides and a constructor. The class is 
// inherited by “triangle” and “square” classes each consist of required data members to 
// compute its area and a constructor and member functions to compute the area and to 
// display the details of the shape. 

#include<iostream>
using namespace std;

class shape{
    public:
    string name;
    int side;
    shape(string name, int side){
        this->name=name;
        this->side=side;
    }
};
class triangle: public shape{
    public:
    int base;
    int height;
    triangle(string name, int b, int h):shape(name,3){
        base=b;
        height=h;
    }
    float area(){
        return (0.5*base*height);
    }
    void display(){
        cout<<"The name of shape : "<<name<<endl;
        cout<<"The number of side : "<<side<<endl;
        cout<<"The base of triangle : "<<base<<endl;
        cout<<"The height of triangle : "<<height<<endl;
        cout<<"The area of triangle : "<<area()<<endl;
    }
};
class squre: public shape{
    public:
    int sid;
    squre(string s, int sid):shape(s,4){
        this->sid=sid;
    }
    float area(){
        return sid*sid;
    }
    void display(){
        cout<<"The name of shape : "<<name<<endl;
        cout<<"The number of side : "<<side<<endl;
        cout<<"The side of squre : "<<sid<<endl;
        cout<<"The area of squre : "<<area()<<endl;
    }
};

int main(){
triangle t("Triangle",5,11);
cout<<"Detials of triangle !"<<endl;
t.display();
cout<<"Detials of squre !"<<endl;
squre s("Squre",5);
s.display();
return 0;
}