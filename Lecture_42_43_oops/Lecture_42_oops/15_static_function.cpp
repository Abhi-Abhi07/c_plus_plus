#include<iostream>
#include<string.h>
using namespace std;

class hero{
    private:
    int health;
    public:
    char *name;
    char level;
    static int timeToComplete;
    //defalut constructor
    hero(){
        cout<<"Default constructer called !"<<endl;
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

    static int random(){
        
        cout<<timeToComplete<<endl;
        return timeToComplete;
    }

};
//int hero :: timeToComplete(3); 
int hero :: timeToComplete=3; 

int main(){
int a=hero::random();
cout<<a<<endl;
return 0;
}