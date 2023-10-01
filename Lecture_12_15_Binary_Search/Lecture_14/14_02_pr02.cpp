#include<iostream>
using namespace std;

int sqrtx(int n){
    int s=0;
    int e=n;
    long long int ans=0;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int squre=mid*mid;
        if(squre==n){
            return mid;
        }
        else if(squre<n){
            ans=mid;
            s=s+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans ;
}

double morePrecision(int n, int precision, int tempsol){

    double factor=1;
    double ans=tempsol;
    for(int i=0; i<precision; i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){

int n;
cout<<"Enter the number : ";
cin>>n;
int tempsol=sqrtx(n);
cout<<"answer is : "<<morePrecision(n,3,tempsol)<<endl;
return 0;
}