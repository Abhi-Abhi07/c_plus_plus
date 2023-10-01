#include<iostream>
using namespace std;
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        // int a=0;
        // int b=1;
        // int ans=0;
        // for(int i=0; i<=(n-2); i++){
        //     // cout<<i<<endl;
        //     // cout<<"Ans : "<<ans<<endl;
        //     ans=a+b;
        //     a=b;
        //     b=ans;
        // }
        
        int ans=fib(n-1)+fib(n-2);
        return ans; 
    }
int main(){

int n;
cout<<"Enter number : ";
cin>>n;
int a=fib(n);
cout<<"fibb : "<<a<<endl;
return 0;
}