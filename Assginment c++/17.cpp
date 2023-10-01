// WAP to create a base class "shape" consist of a pure virtual function to compute the area. 
// Create derived classes "circle", "rectangle", "square" and "triangle" that inherits the 
// "shape" class and consist of required data members and member functions to compute the 
// area and for input and output. Create a "shape" type array and iterate the array to display 
// the area of all the shapes. 

#include<iostream>
using namespace std;

class shape{
    public:
    virtual void input(){};
    virtual float area(){};
    virtual void output(){};
};

class circle: public shape{
    public:
    int r;
    void input(){
        cout<<"Enter the radius of circle : ";
        cin>>r;
    }
    float area(){
        return (3.14*r*r);
    }
    void output(){
        cout<<"Area is : "<<area()<<endl;
    }
};

class rectangle: public shape{
    public:
    int len;
    int width;
    void input(){
        cout<<"Enter the length of rectangle: ";
        cin>>len;
        cout<<"Enter the width of rectangle : ";
        cin>>width;
    }
    float area(){
        return len*width;
    }
    void output(){
        cout<<"Area is : "<<area()<<endl;
    }
};

class squre: public shape{
    public:
    int side;
    void input(){
        cout<<"Enter the side of squre : ";
        cin>>side;
    }
    float area(){
        return side*side;
    }
    void output(){
        cout<<"The area of squre is : "<<area()<<endl;
    }
};

class triangle: public shape{
    public:
    int base;
    int height;
    void input(){
        cout<<"Enter the base of triangle : ";
        cin>>base;
        cout<<"Enter the height of triangle : ";
        cin>>height;
       
    }
    float area(){
        return (base*height)/2;
    }
    void output(){
        cout<<"The area of triangle is : "<<area()<<endl;
    }
};

int main(){
shape *S[4];
circle c;
rectangle r;
squre s;
triangle t;

S[0]=&c;
S[1]=&r;
S[2]=&s;
S[3]=&t;

for(int i=0; i<4; i++){
    S[i]->input();
    S[i]->output();
}

return 0;
}