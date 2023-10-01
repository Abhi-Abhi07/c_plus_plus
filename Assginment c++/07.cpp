// WAP to create a class that represent a string and create a constructor to allocate right 
// amount of memory to the string object and also define the destructor to destroy the 
// objects created. 


#include<iostream>
using namespace std;

class Str{
    public:
    string st;
    int len;
    Str(int len,string s){
        cout<<s<<endl;
        len=s.length();
        cout<<len<<endl;
    }
    ~Str(){
        cout<<"Memory Deallallocated ! "<<endl;
    } 
};

int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    Str(0,s);
return 0;
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class mystring{
//     char *m_data;
//     int m_length;
//     public:
//     mystring(int length){
//         length=m_length;
//         m_data=new char [m_length+1];
//     }
//     ~mystring(){
//         delete[]m_data;
//         cout<<"memory deallocatate !"<<endl;
//     }
// };

// int main(){
// mystring(5);
// return 0;
// }