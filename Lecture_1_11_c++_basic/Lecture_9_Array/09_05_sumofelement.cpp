#include<iostream>
using namespace std;

int main(){
int size;
cin>>size;
int sum=0;
int num[100];
cout<<"Enter the element :"<<endl;
for(int i=0; i<size; i++){
    cin>>num[i];
    sum=sum+num[i];
}
cout<<endl<<"sum = "<<sum<<endl;
return 0;
}