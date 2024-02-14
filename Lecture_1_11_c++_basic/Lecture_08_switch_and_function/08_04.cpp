#include<iostream>
using namespace std;

int main(){
int amount;
cout<<"Enter amount"<<endl;
cin>>amount;
int Rs100, Rs50, Rs20, Rs1;
switch(1){
    case 1:
    Rs100=amount/100;
    amount=amount%100;
    cout<<"100 ke note  "<<Rs100<<endl;
    case 2: 
    Rs50=amount/50;
    amount=amount%50;
    cout<<"50 ke note  "<<Rs50<<endl;
    case 3:
    Rs20=amount/20;
    amount=amount%20;
    cout<<"20 ke note  "<<Rs20<<endl;
    case 4: 
    Rs1=amount/1;
    amount=amount%1;
    cout<<"1 ke note  "<<Rs1<<endl;
    break;
    default :cout<<"No note"<<endl;
}
return 0;
}