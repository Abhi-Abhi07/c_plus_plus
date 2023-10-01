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
};
int hero :: timeToComplete(3); 
int main(){
//good practice
cout<<hero::timeToComplete<<endl;
//bad practice
hero a;
cout<<a.timeToComplete<<endl;//dont use becasue static keyword object ko belong nhi karta he ye class ko belong karta he 
hero b;
b.timeToComplete=21;//dont use
cout<<a.timeToComplete<<endl;//dont use
cout<<b.timeToComplete<<endl;//dont use
return 0;
}