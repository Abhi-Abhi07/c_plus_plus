#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    // base case
    if(n==0 || n==1){
        return true;
    }
    // RR
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        isSorted(arr+1,n-1);
    }
}

int main(){
int arr[]={1,3,5};
int size=sizeof(arr)/sizeof(arr[0]);
if(isSorted(arr,size)){
    cout<<"Array is sorted"<<endl;
}
else{
    cout<<"Array is not sorted"<<endl;
}
return 0;
}