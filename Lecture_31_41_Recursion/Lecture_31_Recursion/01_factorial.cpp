#include<iostream>
using namespace std;

int fac(int n){
    
    // base case
    if(n==0)
        return 1;
    // Recursive Relation
    int smallerprolem = fac(n-1);
    int biggerproblem = n * smallerprolem;
    return biggerproblem;

    // // short
    // return n*fac(n-1);
}

int main(){
int n; 
cout<<"Enter number : ";
cin>>n;
cout<<"Factorial of "<<n<<" is : "<<fac(n)<<endl;
return 0;
}