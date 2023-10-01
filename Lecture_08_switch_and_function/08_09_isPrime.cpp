#include<iostream>
using namespace std;
int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i!=0){
            return true;
        }
            return 0;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime "<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
return 0;
}