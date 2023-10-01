// WAP to create a class "count" consist of a number(static int), the number shows on what 
// number the object is created (Use default constructor) and also count the total number of 
// objects created in the program using static member function. 

#include<iostream>
using namespace std;

class count{
    public:
    static int a;
    int number ;
    count(){
        number=++a;
        cout<<"object created : "<<number<<endl;
    }
    static void total(){
        cout<<"Total number of object : "<<a<<endl;
    }
};
int count :: a;
int main(){

count obj1;
count obj2;
count obj3;
count::total();

return 0;
}