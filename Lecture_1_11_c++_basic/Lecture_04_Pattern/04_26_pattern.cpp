#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
char ch='A';
int i=0;
while(i<n){
    int j=0;
    while(j<n){
        cout<<char(ch+i+j)<<" ";
        j++;
    }cout<<endl;
    i++;
}
return 0;
}