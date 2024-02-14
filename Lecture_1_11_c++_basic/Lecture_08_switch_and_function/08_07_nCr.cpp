#include<iostream>
using namespace std;
int factorial(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac = fac*i;
    }
    return fac;
}
int nCr(int n, int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return num/deno;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"nCr is "<< nCr(a, b)<<endl;
return 0;
}