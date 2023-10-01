#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }
    int k=3;
    while(k<=i*2){
        cout<<"*"<<" ";
        k++;
    }
    int l=1;
    while(l<=n-i+1){
        cout<<n-i-l+2<<" ";
        l++;
    }cout<<endl;
    i++;
}


// int n;
// cin>>n;
// int i=1;

// while(i<=n){
//     int j=1;
//     while(j<=n-i+1){
//         cout<<j;
//         j+=1;
//     }

//     int star1=1;
//     while(star1<i){
//         cout<<"*";
//         star1+=1;
//     }

//     int star2 =1;
//     while(star2<i){
//         cout<<"*";
//         star2+=1;
//     }

//     int k=i;
//     while(k<=n){
//         int val=n-k+1;
//         cout<<val;
//         k+=1;
//     }
//     cout<<endl;
//     i+=1;
// }
return 0;
}