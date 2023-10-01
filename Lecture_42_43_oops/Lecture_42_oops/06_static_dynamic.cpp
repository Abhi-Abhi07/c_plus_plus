#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }

    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level=ch;
    }
};

int main(){

//static allocation
hero a;
a.sethealth(100);
a.level='A';
cout<<"level is : "<<a.getlevel()<<endl;
cout<<"health is : "<<a.gethealth()<<endl;

//dynamic allocation
hero *b = new hero;
b->sethealth(200);
b->level='B';
cout<<"level is : "<<((*b).getlevel())<<endl;
cout<<"level is : "<<char((*b).getlevel())<<endl;
cout<<"health is : "<<(*b).gethealth()<<endl;

(*b).sethealth(2000);
b->setlevel('B');
cout<<"level is : "<<b->getlevel()<<endl;
cout<<"health is : "<<b->gethealth()<<endl;
return 0;
}