#include<iostream>
using namespace std;

int checkPrime(int n){
    int cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){return true;}
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(checkPrime(n)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;
}