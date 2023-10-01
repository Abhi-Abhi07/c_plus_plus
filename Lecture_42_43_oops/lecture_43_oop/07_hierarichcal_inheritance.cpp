#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    int lags;
    void ok(){
        cout<<"done"<<endl;
    }

};

class male: public Human{
    public:
    void setmale(){
        cout<<"I am male"<<endl;
    }

};

class female: public Human{
    public:
    void setmale(){
        cout<<"I am female"<<endl;
    }
};

int main(){

male m;
female f;

m.setmale();
m.ok();
f.setmale();
f.ok();
return 0;
}