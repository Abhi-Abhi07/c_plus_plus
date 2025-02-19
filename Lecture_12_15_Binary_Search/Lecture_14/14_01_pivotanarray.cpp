#include<iostream>
using namespace std;

int pivotArray(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    // while(s<e){
    //     if(arr[mid]>=arr[0]){
    //         s=mid+1;
    //     }
    //     else{
    //         e=mid;
    //     }
    //     mid=s+((e-s)/2);
    // }
    while(s<e){
        if(arr[mid]>arr[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return s;
}

int main(){

int arr[6]={7,9,11,4,5,6};

int index=pivotArray(arr, 6);

cout<<"Pivot array is "<<arr[index]<<endl;
return 0;
}