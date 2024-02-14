#include <iostream>
using namespace std;
class base
{ //  base class
public:
    void show()
    // virtual void show()// virtual function
    { 
        cout << "base class " << endl;
    }
};
class derived : public base //  inheriting Shape class.
{
public:
    void show()
    {
        cout << "drived class..." << endl;
    }
};
class last : public derived //  inheriting Shape class.

{
public:
    void show()
    {
        cout << "last class..." << endl;
    }
};
int main(void)
{
    base *ptr; //base class pointer
    base b; // base class object
    ptr = &b;
    ptr->show();
    derived d; //derived class object
    ptr = &d; 
    ptr->show();
    last l;
    ptr = &l;
    ptr->show();
    return 0;
}
