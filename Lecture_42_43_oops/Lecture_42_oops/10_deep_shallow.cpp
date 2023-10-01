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


    // copy constructer
    hero(hero &temp){
        
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
        cout<<name<<"\t"<<health<<"\t"<<level<<endl;
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
        strcpy(this->name,name);//use this
        // this->name=name;//don't use
    }
};

int main(){

hero hero1;
hero1.sethealth(100);
hero1.setlevel('A');
char name[10]="Babber";
hero1.setName(name);
hero1.print();

//use default copy constructer
//hero hero2(hero1);
hero hero2=hero1;
hero2.print();

hero1.name[0]='A';
hero1.print();
hero2.print();

// Assinment operater
hero1=hero2;
hero1.print();
hero2.print();

return 0;
}