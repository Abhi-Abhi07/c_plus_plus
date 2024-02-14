#include<iostream>
using namespace std;

int main(){

char chname[]={'a','b','\0','c','d','\0'};
string strname={'a','b','\0','c','d','\0','e'};//yha string len 7 but niche jaker dekhe


cout<<"chname is : "<<chname<<endl;
cout<<"strname is : "<<strname<<endl;
cout<<"strname len : "<<strname.length()<<endl;
cout<<"strname iterate : ";
for(int i=0; i<strname.length(); i++){
        cout<<strname[i];
    }
    cout<<endl<<endl;
cout<<"Enter chname with space or without space: ";
cin>>chname;
cout<<chname<<endl;
cout<<"Enter strname with space or without space : ";
cin>>strname;
cout<<strname<<endl<<endl;
cout<<"Enter chname : ";
cin>>chname;
cout<<chname<<endl;


char charr[5]={'c','d','\0','x','y'};
    string str="cd\0xy";//yha string lengt 2 hai but upper jake dekhe
    cout<<"charray output : ";
    for(int i=0; i<5; i++){
        cout<<charr[i];
    }
    cout<<endl;
    cout<<"string len : "<<str.length()<<endl;
    cout<<"string output : ";
    for(int i=0; i<str.length()+3; i++){
        cout<<str[i];
    }
    cout<<endl;
    cout<<"Dirct string output : ";
    cout<<str<<endl;
return 0;
}