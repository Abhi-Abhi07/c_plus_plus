#include<iostream>
using namespace std;


class hero{
    public:
    int health;
    char level;
    void print(){
        cout<<level<<endl;
    }
};
int main(){

hero Abhi;

Abhi.health=100;
Abhi.level='a';

cout<<"health : "<<Abhi.health<<endl;
cout<<"level : "<<Abhi.level<<endl;

return 0;
}