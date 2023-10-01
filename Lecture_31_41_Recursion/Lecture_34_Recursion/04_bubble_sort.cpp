#include<iostream>
using namespace std;

void bubblesort(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }

    //
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);

}

int main(){
// int arr[]={4,2,6,7,7,7,78,7,7,9,5,1};
int arr[]={2,9,1,42,4,243,7};
int size=sizeof(arr)/sizeof(arr[0]);

bubblesort(arr,size);
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
return 0;
}