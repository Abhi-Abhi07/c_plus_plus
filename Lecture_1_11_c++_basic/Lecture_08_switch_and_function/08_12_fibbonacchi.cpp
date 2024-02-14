#include<iostream>
using namespace std;
int fibbonachi(int n){
    int a=0;
    int b=1;
    int fib=0;
    // if(n==2){
    //     int ans=1;
    //     return ans;
    // }
    for(int i=2; i<n; i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    return fib;
}
int main(){
int n;
cin>>n;
int ans = fibbonachi(n);
cout<<ans<<endl;
return 0;
}