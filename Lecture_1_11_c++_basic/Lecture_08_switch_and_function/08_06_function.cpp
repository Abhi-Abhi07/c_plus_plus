#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){ //odd
        return 0;
    }
    return 1; //even
}
int main(){
int num;
cin>>num;
if(isEven(num)){
    cout<<"Number is even"<<endl;
}
else{
    cout<<"Number is odd"<<endl;
}
return 0;
}