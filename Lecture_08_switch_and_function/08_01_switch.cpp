#include<iostream>
using namespace std;

int main(){
char ch = '2';
int num=1;
switch(ch){
    case 1: cout<<"hii"<<endl;
    break;
    case '2': switch(num){
                case 1:  cout<<"namste"<<endl;
    break;
    } 
    break;
    case 3: cout<<"back"<<endl;
    break;
    default: cout<<"fault"<<endl;

}
return 0;
}