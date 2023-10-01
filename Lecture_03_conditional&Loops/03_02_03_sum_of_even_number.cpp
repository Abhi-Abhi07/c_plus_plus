#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int sum=0;
int i=2;

while(i<=n){
    sum=sum+i;
    cout<<i<<endl;
    i=i+2;
}
cout<<"sum of even number "<<sum<<endl;
return 0;
}