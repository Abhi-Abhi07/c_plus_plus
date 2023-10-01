#include<iostream>
using namespace std;

//inline function are used to reduce the function call overheat
//No extra memory usage
inline int getmax(int& a, int& b){
    return (a>b)?a:b;
}
int main(){
int a=1;
int b=2;

int ans = getmax(a,b);
cout<<""<<ans<<endl;
a=a+3;
b=b+1;
ans = getmax(a,b);
cout<<""<<ans<<endl;
return 0;
}