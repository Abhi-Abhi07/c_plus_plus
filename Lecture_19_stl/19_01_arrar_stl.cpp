#include<iostream>
#include<array>
using namespace std;

int main(){
int basic[3]={1,2,3};
//array ki implimentation basic/ static array se hi hoti he 
array<int,6>a={1,2,3,4,5,6};
int size=a.size();
cout<<"size "<<size<<endl;
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}
cout<<"Element at 2nd Index "<<a.at(2)<<endl;//complexity O(1)
cout<<"Empty or not "<<a.empty()<<endl;//complexity O(1)

cout<<"First element "<<a.front()<<endl;//complexity O(1)
cout<<"Last element "<<a.back()<<endl;//complexity O(1)

return 0;
}