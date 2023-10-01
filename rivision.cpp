#include<iostream>
using namespace std;

int main(){
    int arr[5]={1 ,1 ,1};
    int ans=0;
    for(int i=0; i<3; i++){
        ans=ans^arr[i];
        cout<<ans<<endl;
    }
    cout<<endl<<endl<<endl;
    cout<<ans<<endl<<endl<<endl;
    for(int i=1; i<5; i++){
        ans=ans^i;
        cout<<ans<<endl;
    }
    cout<<endl<<endl<<endl;
    cout<<ans<<endl<<endl<<endl;
return 0;
}