#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hi love babbar"<<endl;
    }

    void sayhello(int a){
        cout<<" a hi love babbar"<<endl;
        
    }

    void sayhello(double b){
        cout<<" b hi love babbar"<<endl;
    }

    int sayhello(int a, int b){
        cout<<"77777"<<endl;
        return 1;
    }
    };
int main(){

A obj;
obj.sayhello(5.7);
obj.sayhello(5,6);

return 0;
}