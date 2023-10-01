#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long int n;
    cout<<"Enter number : ";
    cin>>n;
    unsigned long long int i=1, ans=0;
    if(n<0){
        n=pow(2,16)+n;
    }
    cout<<n<<endl;
    while(n){
        int lastBit=n&1;
        ans=(i*lastBit)+ans;
        n=n>>1;
        i*=10;
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}