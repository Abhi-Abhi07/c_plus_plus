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

   int getlevel(){
    return level;
   }
   void setlevel(char ch){
    level=ch;
   }

};
int main(){
hero Ai;

cout<<"Size of class : "<<sizeof(Ai)<<endl;

cout<<"Health of Ai is : "<<Ai.gethealth()<<endl;

Ai.sethealth(100);
Ai.level='A';
cout<<"Size : "<<Ai.gethealth()<<endl;
cout<<"Size : "<<Ai.level<<endl;

return 0;
}