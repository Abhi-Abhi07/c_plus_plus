#include<iostream>
using namespace std;

void reachHome(int& src, int& dest){
    cout<<"Source : "<<src<<" -> Destination : "<<dest<<endl;
    if(src==dest){
        printf("Ghar pahuch gya\n");
        return ;
    }

    // Processing
    src++;

    // Recursive call
    reachHome(src, dest);
}

int main(){

int dest=10, src=1;

cout<<endl;

reachHome(src,dest);

return 0;
}