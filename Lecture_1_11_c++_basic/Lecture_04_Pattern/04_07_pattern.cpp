#include<iostream>
using namespace std;

int main(){
// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=1;
//     int value=row;
//     while(col<=row){
//         cout<<value<<" ";
//         value =value+1;
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }


// int n;
// cin>>n;
// int row=1;
// while(row<=n){
//     int col=row;
   
//     while(col<row*2){
//         cout<<col<<" ";
        
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
// }


int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
    int j=0;
    while(j<i){
        cout<<j+i<<" ";
        j++;
    }cout<<endl;
    i++;
}

return 0;
}