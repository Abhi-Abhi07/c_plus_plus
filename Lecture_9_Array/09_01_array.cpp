#include<iostream>
using namespace std;

int main(){
    // Declare
int number[15];
//accessing an array
// cout<<"value at index 14 "<<number[14]<<endl;
// cout<<"value at index 5 "<<number[5]<<endl;
// cout<<"value at index 20 "<<number[20]<<endl;

//intializing array
// int second[3]={4,5,7};
// cout<<"value at index 2 "<<second[2]<<endl;

int third[15]={2,7};
int n=15;
for (int i = 0; i < n; i++)
{
    cout<<"value at index "<<i<<" "<<third[i]<<endl;
}
cout<<endl;
int fourth[10]={0};
int n1=10;
for (int i = 0; i < n1; i++)
{
    cout<<"value at index "<<i<<" "<<fourth[i]<<endl;
}
cout<<endl;
int fifth[10]={1};
int n2=10;
for (int i = 0; i < n2; i++)
{
    cout<<"value at index "<<i<<" "<<fifth[i]<<endl;
}
cout<<"Everything is badiya"<<endl;

return 0;
}