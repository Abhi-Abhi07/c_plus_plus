// WAP to create a class "data" consist of two integer numbers and create an another class 
// "maximum" that inherits the "data" class. Compute and print the maximum number 
// between the two inherited numbers. 

#include<iostream>
using namespace std;
class data{
    public:
    int x;
    int y;
    void setx(int a){
        x=a;
    }
    void sety(int b){
        y=b;
    }
};
class maximum : public data{
    public:
    void compare(){
        if(x>y){
            cout<<x<<" Greter then "<<y<<endl;
        }
        else{
            cout<<y<<" Greter then "<<x<<endl;
        }
    }
};
int main(){
int a,b;
cout<<"Enter a number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
maximum obj;
obj.setx(a);
obj.sety(b);
obj.compare();
return 0;
}