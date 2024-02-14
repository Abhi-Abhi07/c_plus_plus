// count set bits in first N natural no.
// TC -> O(logN)
#include<iostream>
using namespace std;
int largestPower2InRange(int n){
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}
int solve(int n){
    if(n==0){
        return 0;
    }
    int x=largestPower2InRange(n);
    int bitsupto2raisex=x*(1<<(x-1));
    int msbfrom2rxton=n-(1<<x)+1;
    int reamining=solve(n-(1<<x));
    int ans=bitsupto2raisex+msbfrom2rxton+reamining;
    return ans;
}
int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"total set bits are : "<<solve(n)<<endl;
return 0;
}