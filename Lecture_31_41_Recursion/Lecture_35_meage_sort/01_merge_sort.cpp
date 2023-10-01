#include<iostream>
using namespace std;

void sortArr(int *arr, int s, int e){

    int mid = (s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //copy value first arr
    int k=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[k++];
    }

    //copy value second arr
    k=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[k++];
    }

    //merge sort wala logic
    int index1=0;
    int index2=0;
    k=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[k++]=first[index1++];
    }

    while(index2 < len2){
        arr[k++]=second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e){

    //base case
    if(s>=e){
        return ;        
    }

    int mid=(s+e)/2;

    //left part
    mergeSort(arr,s,mid);

    //right part
    mergeSort(arr,mid+1,e);

    //merge to sorted array
    sortArr(arr,s,e);

}

int main(){
    int arr[10]={5,34,5,35,76,423,54,5,453,543};
    int n=10;
    mergeSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}