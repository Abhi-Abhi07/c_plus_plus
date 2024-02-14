#include<iostream>
using namespace std;
int count=0;//global
class acc{
    public:
    int id;
    string name;
    // int count=0;
    // static int count;
    acc(int id,string name){
        this->id=id;
        this->name=name;
        count++;
    }
    void display(){
         cout<<id<<" "<<name<<endl;   
    }
};
// int acc::count=0;//static
int main(){
    acc a1(2,"Abhi");
    acc a2(3,"Ai");
    a1.display();
    a2.display();
    cout<<count<<endl;//global
    // cout<<a1.count<<endl;
    // cout<<a2.count<<endl;
    // cout<<"Count: "<<acc::count<<endl;//static
return 0;
}