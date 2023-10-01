#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0){
        return 1;
    }
    else{
        return (2 * power(n-1));
    }
}

int main(){
int n;
cout<<"Enter power : ";
cin>>n;
cout<<"Ans is : "<<power(n)<<endl;
return 0;
}