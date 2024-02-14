#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main()   
{  
    Employee e1; //creating an object of Employee   
    Employee e2,e3; //creating an object of Employee 
    cout<<sizeof(string)<<endl; 
    cout<<"I ma or pta nhi "<<endl;
    return 0;  
}  