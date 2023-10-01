// WAP to create a class "point" consist of x(int) and y(int) coordinates. Create constructors 
// that initialize the object with zeros(default constructor), with integer 
// numbers(parameterized constructor) and copy the one object from another object(Copy 
// constructor).

#include<iostream>
using namespace std;
class point{
    private:
    int x;
    int y;
    public:
    point(){
        x=0;
        y=0;
    }
    void set_point(int a, int b){
        x=a;
        y=b;
    }
        int getx(){
            return x;
        }
        int gety(){
            return y;
        }
};
int main(){
point p1,p2;
p1.set_point(5,10);
p2=p1;
cout<<"p1 : "<<p1.getx()<<" "<<p1.gety()<<endl;
cout<<"p2 : "<<p2.getx()<<" "<<p2.gety()<<endl;
return 0;
}