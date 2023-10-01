// #include<iostream>
// using namespace std;

// class my{
//     int a;
//     public:
//     void fun(){
//         a=100;
//     }
//     void funs() const{
//         a;
//     }
//     void funt(){
//         a=101;
//     }
// };
// int main(){

// return 0;
// }



#include<iostream>
using namespace std;
class my{
    int x;
    public:
    my (int var):x(var){
    /*  The above use of Initializer list is optional as the
        constructor can also be written as:
        my(int var=0) {
            x = var;
        }
    */ 
    }
    void setx()const{
        cout<<"Enter value : "<<endl;
        // cin>>x;
    }
    void showx()const{
        cout<<"x is : "<<x<<endl;
    }
};


int main(){
const my obj1(1);
obj1.setx();
obj1.showx();
return 0;
}
