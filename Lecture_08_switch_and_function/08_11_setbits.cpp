#include<iostream>
#include<math.h>
using namespace std;
int bitconverter(int n){
    int i=1;
    int ans=0;
    while(n!=0){
        int bit = n&1;
        ans = ans + bit*i;
        n=n>>1;
        i*=10;
    }
    return ans;
}
int bitcounter(int n){
    int num=bitconverter(n);
    int ans=0;
    while(num!=0){
        int digit = num%10;
        if(digit==1){
        ans = ans+digit;
        }
        num=num/10;
    }
    return ans;
}
int main(){
int a,b;
cin>>a;
cin>>b;
int ans=bitcounter(a)+bitcounter(b);
cout<<ans<<endl;
return 0;
}