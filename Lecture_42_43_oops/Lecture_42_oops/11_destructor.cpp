#include<iostream>
#include<string.h>
using namespace std;

class hero{
    private:
    int health;
    public:
    char *name;
    char level;
    //defalut constructor
    hero(){
        cout<<"Default constructer called !"<<endl;
    }
    //parameterlized consreuctor
    hero (int health){
        this->health=health;
    }

    hero(int health, char level){
        this->health=health;
        this->level=level;
    }
    //copy constructer
    hero(hero& temp){
        
        //deep copy 
        //shallo and deep copy me difference dekhne ke liye 
        //copy constructor ko comment karke program run karaye or shello copy ka output dekhe
    
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"copy constructor called !"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"name : "<<name<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    //destructor
    ~hero(){
        cout<<"destructor called !"<<endl;
    }
};

int main(){

//static allocation
//static allocation me destructor automatic call hota he
hero a;

//dynamic allocation
//dynamic allocation me destructor ko manually call karna padta he
hero *b=new hero;

//manually called
delete b;
return 0;
}