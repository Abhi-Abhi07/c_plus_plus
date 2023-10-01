#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;
    int a;

   
 hero(){
        cout<<"Called constructor "<<endl;
        
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
    hero(int a){
        this->a=23;
    }
};

int main(){

//static allocation
// hero abhi;

//dynamically
hero *a = new hero;
// hero *b=new hero();

return 0;
}