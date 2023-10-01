#include<iostream>
using namespace std;

int SumOfArray(int *arr, int n){
    // Base case
    if(n==0){
        return n;
    }
    // RR
    int ans=arr[0]+SumOfArray(arr+1, n-1);
    cout<<ans<<endl;
    return ans;
}

int main(){

int arr[]={2,3,4,5,6};
int size = sizeof(arr)/sizeof(arr[0]);

cout<<"Sum is : "<<SumOfArray(arr,size)<<endl;
return 0;
}