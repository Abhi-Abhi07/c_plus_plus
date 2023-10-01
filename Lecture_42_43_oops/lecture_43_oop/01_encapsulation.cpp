#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int id;

    public:
    int getage(){
        return this->age;
    }
};

int main(){

student s1;
cout<<"Sab badiya he !"<<endl;
return 0;
}