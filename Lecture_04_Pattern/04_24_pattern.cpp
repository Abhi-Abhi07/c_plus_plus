#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i=1;

while(i<=n){
    int k=1;
    while(k<=n-i){
        cout<<" ";
        k+=1;
    }
    int j=1;
    int value=1;
    while(j<=i){
       
        cout<<value;
        value+=1;
        j+=1;
    }
    int l=1;
    int val=i-1;
    while(l<i){
        cout<<val;
        val-=1;
        l+=1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}