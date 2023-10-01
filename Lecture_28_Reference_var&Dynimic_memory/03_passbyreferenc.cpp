#include<iostream>
using namespace std;

//its bad practice
int& fun(int n){
    int a=n++;//a is local variable;
    int &ans=a;//&ans is local variable
    return ans;
}
int main(){
int i=5;

cout<<"value is : "<<fun(i)<<endl;
return 0;
}