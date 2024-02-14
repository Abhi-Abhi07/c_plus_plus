#include<iostream>
using namespace std;

int main(){
    char *p;
    int l=65;
    p=(char*)&l;
    cout<<"1  "<<p<<endl;
    cout<<"2  "<<*p<<endl;
    cout<<"3  "<<l<<endl;
    cout<<"5  "<<&(*p)<<endl;
    cout<<"6  "<<(&(*p))<<endl;
    cout<<"7  "<<sizeof(&(*p))<<endl;
    cout<<endl<<endl;
    cout<<"4  "<<&l<<endl;

    // int *p;
    // char l='a';
    // p=(int*)&l;
    // cout<<"1  "<<p<<endl;
    // cout<<"2  "<<*p<<endl;
    // cout<<"3  "<<l<<endl;
    // cout<<"5  "<<&(*p)<<endl;
    // cout<<"6  "<<(&(*p))<<endl;
    // cout<<"7  "<<sizeof(&(*p))<<endl;
    // cout<<endl<<endl;
    // cout<<"4  "<<&l<<endl;
return 0;
}