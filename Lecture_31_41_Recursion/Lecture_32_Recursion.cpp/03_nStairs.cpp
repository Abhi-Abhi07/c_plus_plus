#include<iostream>
using namespace std;

// problem 0th stair se nth stair par jana he
// condition 1 step or 2 step ka use kar sakte he
int countDistinctWays(int nStairs) {
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    return (countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2));
}
int main(){
int n;
cout<<"Enter stair : ";
cin>>n;
int ans = countDistinctWays(n);
cout<<ans<<endl;
return 0;
}