#include<iostream>
using namespace std;

int main(){
char s[30];
cout<<"Enter string "<<"without delimeter : ";

cin.getline(s ,30);
cout<<s<<endl;
//'$' is delimeter for breaking string
//'$' ke place par other caracter bhi use kar sakte he 
//Ex: 't', 'a' etc.

cout<<"Enter string"<<" with delimeter : ";
cin.getline(s ,30, '$');
cout<<s;

return 0;
}