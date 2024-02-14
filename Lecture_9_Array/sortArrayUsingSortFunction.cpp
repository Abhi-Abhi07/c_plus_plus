#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[6]={3,45,4,3,9,5};
  for(int i=0; i<8; i++){
    cout<<&(arr[i])<<"   "<<arr+i<<endl;
  }
  sort(arr,arr+6);
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
  }

return 0;
}