#include<iostream>
using namespace std;
int isAP(int n){
    int ans=(3*n)+7;
    return ans;
}
int main(){
int n;
cin>>n;
cout<<isAP(n)<<endl;
return 0;
}