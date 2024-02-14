#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="ate a mple";
    string str2="ate a mple";
    // char ch=str[0];
    // int n=ch-'a';
    // cout<<n<<endl;
    // char c=n+'b';
    // cout<<c<<endl;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            str.replace(i,1,"@40");
        }
    }
    cout<<str<<endl;
    for(int i=0; i<str2.length(); i++){
        if(str2[i]==' '){
            str2.replace(i,3,"@40");
        }
    }
    cout<<str2<<endl;
return 0;
}