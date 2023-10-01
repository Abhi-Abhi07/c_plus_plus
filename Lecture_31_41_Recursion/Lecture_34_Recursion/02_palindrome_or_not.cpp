#include<iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j){
    if(i>j){
        return 1;
    }
    if(str[i]!=str[j]){
        return 0;
    }
    else{
        return checkpalindrome(str,i+1,j-1);
    }
}

int main(){
string name="abcdecba";
cout<<endl;
bool ispresent=checkpalindrome(name,0,name.length()-1);
if(ispresent){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome"<<endl;
}
return 0;
}