#include<iostream>
using namespace std;

int minIndex(int *arr, int i, int j){
    if(i==j){
        return i;
    }
    int k=minIndex(arr,i+1,j);
    return (arr[i]<arr[k])? i : k;
}
void recursiveSelection(int *arr, int n, int index=0){
    if(index==n){
        return ;
    }
    int k=minIndex(arr,index,n-1);
    if(k!=index){
        swap(arr[k],arr[index]);
    }
    recursiveSelection(arr,n,index+1);
}

void RRSelection(int *arr,int i,int j,int &minIndex,int n){
    if(i>=(n-1) || j>=n){
        return;
    }
    if(arr[minIndex]>arr[j]){
        minIndex=j;
    }
    RRSelection(arr,i,j+1,minIndex,n);
    if(minIndex!=-1){
        swap(arr[minIndex],arr[i]);
        minIndex=-1;
    }
    if(j==(i+1)){
        minIndex=i+1;
        RRSelection(arr,i+1,i+2,minIndex,n);
    }
}
int main(){
    int arr[]={5,9,3,1,42,4,243,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    // recursiveSelection(arr,n);
    int minIndex=0;
    RRSelection(arr,0,1,minIndex,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}