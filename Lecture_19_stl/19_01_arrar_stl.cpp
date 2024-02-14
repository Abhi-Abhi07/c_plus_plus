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
    cout<<a[i]<<" ";
}
cout<<endl;
array<int,0>::iterator itr=a.begin()+3;
for(auto it=itr; it!=a.end(); it++){
    cout<<*it<<" ";
}
cout<<endl;
cout<<"Element at 2nd Index "<<a.at(2)<<endl;//complexity O(1)
cout<<"Empty or not "<<a.empty()<<endl;//complexity O(1)

cout<<"First element "<<a.front()<<endl;//complexity O(1)
cout<<"Last element "<<a.back()<<endl;//complexity O(1)

array<int,6>arr(a);
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}