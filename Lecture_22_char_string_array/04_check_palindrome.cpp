#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else if(ch>='A' && ch<='Z'){
        char temp =ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(tolowercase(name[s])==tolowercase(name[e])){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

void revers(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){

char name[20];

cout<<"Enter your name : "<<endl;
cin>>name;
cout<<"Your name is : "<<name<<endl;
int length=getLength(name);
cout<<"Length is : "<<length<<endl;

revers(name,length);
cout<<"After revers name !"<<endl;
cout<<"Your name is : "<<name<<endl;

bool pldrome=checkPalindrome(name,length);
if(pldrome==1){
    cout<<"String is paindrime"<<endl;
}
else{
    cout<<"String is not paindrime"<<endl;
}

cout<<"Character is : "<<tolowercase('a')<<endl;
cout<<"Character is : "<<tolowercase('A')<<endl;

return 0;
}