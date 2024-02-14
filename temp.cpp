// #include<iostream>
// using namespace std;

// int main(){
//     char *x="labcdr";
//     char *ptr=x;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;

//     int f=10;
//     int *p=&f;
//     int **q=&p;
//     int s=20;
//     *q=&s;
//     (*p)++;
//     cout<<f<<"    "<<s;
// return 0;
// }

#include<iostream>
using namespace std;
int &fun(){
    static int x=10;
    static int y=20;
    cout<<x<<endl;
    cout<<y<<endl;
    // cout<<"add x : "<<&x<<endl;
    // cout<<"add y : "<<&y<<endl;
    return x;
}
int main(){
    fun()=30;
    cout<<fun()<<endl;
    // cout<<"add fun "<<&fun();
return 0;
}