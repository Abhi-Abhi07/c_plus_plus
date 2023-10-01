#include<iostream>
using namespace std;

class hero{
    private:
    int health;
    public:
    char level;

    hero(){
        cout<<"simple constructor called "<<endl;
    }
    
    hero(int health){
        cout<<"this : "<<this<<endl;
        this->health=health;
    }

    hero(int health,char level){
        cout<<"this : "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health= h;
    }

    int getlevel(){
        return level;
    }
    void setlevel(char ch){
        level= ch;
    }
};
int main(){
//static allocation
hero ai(10);
cout<<"address of ai : "<<&ai<<endl;
//dynamically
hero *b =new hero;

hero temp(11,'c');
temp.print();

return 0;
}