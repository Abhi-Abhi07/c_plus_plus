#include<iostream>
using namespace std;

int main(){
    //f= farhenit starting for ex: 0
    // e = kha tk check karna hai for ex: 10
    // w = kitna value skip karke dekhna he for ex: 2
    //output
    // f        c
    // 0       -17
    // 2       -16
    // 4       -15
    // 6       -14
    // 8       -13
    // 10      -12
int f,e,w;
cin>>f>>e>>w;
int c;

while(f<=e){
    c=((f-32)*5/9);
    cout<<f<<"\t"<<c<<endl;
    f=f+w;
}

return 0;
}