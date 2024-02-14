#include<iostream>
using namespace std;
//Normal code
// int N=100000;
// int sieve[100001];
// void createSieve(){
//     for(int i=2; i<=N; i++){
//         sieve[i]=true;
//     }
//     for(int i=2;i<=N; i++){
//         if(sieve[i]==true){
//             for(int j=2*i; j<=N; j+=i){
//                 sieve[j]=false;
//             }
//         }
//     }
// }

// First Optimization
// int N=100000;
// int sieve[100001];
// void createSieve(){
//     for(int i=2; i<=N; i++){
//         sieve[i]=true;
//     }
//     for(int i=2;i<=N; i++){
//         if(sieve[i]==true){
//             for(int j=i*i; j<=N; j+=i){//yha
//                 sieve[j]=false;
//             }
//         }
//     }
// }

// Second Optimization
int N=100000;//global variable decleration
int sieve[100001];//global array decleration & default value is 0
void createSieve(){
    for(int i=2; i<=N; i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=N; i++){//yha
        if(sieve[i]==true){
            for(int j=i*i; j<=N; j+=i){
                sieve[j]=false;
            }
        }
    }
}
int main(){
    createSieve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(sieve[n]){//array ke element access TC O(1)
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;
}