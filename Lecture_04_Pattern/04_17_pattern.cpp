#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    
    // space print karo
    while(j<=n-i){  
        cout<<" ";
        j+=1;
        }
    int k=1;

    //star print karo
        while(k<=i){
            cout<<"*";
            k+=1;    
    }
    cout<<endl;
    i=i+1;
}
return 0;
}