#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;
    //defalut constructor
    Hero(){
        cout<<"Default constructer called !"<<endl;
    }
    //parameterlized consreuctor
    Hero (int health){
        this->health=health;
    }

    Hero(int health, char level){
        this->health=health;
        this->level=level;
    }
    //copy constructer
    Hero(Hero& temp){
        cout<<"copy constructor called !"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"health : "<<health<<endl;
        cout<<"level : "<<level<<endl;
    }

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }

    int getlevel(){
        return level;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    Hero Ai(80,'A');
    Ai.print();

    Hero Ab(Ai);
    Ab.print();    

    Hero c(100,'n');
    c.print();

    //copy constructor
    Hero b(c);
    b.print();
return 0;
}