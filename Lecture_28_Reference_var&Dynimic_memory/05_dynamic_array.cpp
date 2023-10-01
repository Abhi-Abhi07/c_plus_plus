#include<iostream>
using namespace std;

int getsum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

int n;
cout<<"Enter number : ";
cin>>n;
int *arr=new int[n];
cout<<"Enter value "<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int ans=getsum(arr,n);
cout<<"Sum is : "<<ans<<endl;;
return 0;
}