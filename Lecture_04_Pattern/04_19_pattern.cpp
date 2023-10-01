#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int k=1;
    while(k<i){
        cout<<" ";
        k+=1;
    }
    int j=i;
    while(j<=n){
        
        cout<<"*";
        j+=1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}