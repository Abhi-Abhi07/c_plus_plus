#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    //test(int i,int j):a(i),b(j)
    //test(int i,int j):a(i),b(j+i)
    test(int i,int j):a(i),b(j+a)
    // test(int i,int j):b(j),a(i+b)//->out put garbage value becuse b is second initialization and a is first initializarion in class 

    {
        cout<<"A is : "<<a<<endl;
        cout<<"b is : "<<b<<endl;

    }
};
int main(){

test t1(10,7);

return 0;
}