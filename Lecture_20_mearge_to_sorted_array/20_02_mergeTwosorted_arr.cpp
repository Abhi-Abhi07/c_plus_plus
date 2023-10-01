#include<iostream>
using namespace std;

void merge(int arr1[],int m, int arr2[],int n, int arr[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<m){
        arr[k++]=arr1[i++];
    }
    while(j<n){
        arr[k++]=arr[j++];
    }
}

void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
int arr1[5]={1,3,5,7,9};
int arr2[4]={2,4,6,8};
int arr[9]={0};

merge(arr1,5,arr2,4,arr);
print(arr,9);
return 0;
}