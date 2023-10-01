#include<iostream>
using namespace std;

//update 2 is pass by reference
//pass by reference me copy create nhi hoti he
// (same memory block) / (same value) me direct change hota he
void update2(int& n){
    n++;
    cout<<"Inside update2 : "<<n<<endl;
}

// update 1 is pass by value 
//pass by value me copy create hoti he
void update1(int n)
{
    n++;
    cout<<"Inside update1 : "<<n<<endl;
}
int main(){

int i=5;

cout<<"pass by value "<<endl;
cout<<"Before : "<<i<<endl;
update1(i);
cout<<"After : "<<i<<endl;

cout<<"pass by reference "<<endl;
cout<<"Before : "<<i<<endl;
update2(i);
cout<<"After : "<<i<<endl;
return 0;
}