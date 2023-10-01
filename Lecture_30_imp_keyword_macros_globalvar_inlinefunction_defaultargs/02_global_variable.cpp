#include<iostream>
using namespace std;

int score = 15;//global variable
//but global variable is a bad practice because ise ek jagh change karne par ye sabhi jagh change ho jata he
//use carefully global variable
void fun(int& i){
    cout<<"fun me "<<i<<endl;
    cout<<"fun me "<<score<<endl;
    score=10;//main and fun2 me value change
}
void fun2(int i[]){
    cout<<"fun2 me "<<*i<<endl;
    cout<<"fun2 me "<<score<<endl;
}
int main(){
int i=5;
fun(i);
fun2(&i);
cout<<"main me "<<i<<endl;
cout<<"main me "<<score<<endl;
return 0;
}