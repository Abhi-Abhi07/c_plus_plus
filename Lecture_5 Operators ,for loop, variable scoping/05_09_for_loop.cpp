#include<iostream>
using namespace std;

int main(){

/*
int n;

cout<<"Enter the number "<<endl;
cin>>n;

cout<<"Printing number of 1 to n "<<endl;

int i=1;

for (;; ){
if(i<=n){
    cout<<i<<endl;
}
else{
    break;
}
    i++;
}
*/

for(int a=1,b=2,c=3; a>=0 && b>=1 && c>=2; a--,b--,c--){
    cout<<a<<" "<<b<<" "<<c<<endl;
}

return 0;
}