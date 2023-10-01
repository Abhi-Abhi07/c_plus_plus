#include<iostream>
using namespace std;

int partition(int *arr,int s, int e){
    int pivat=arr[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++){
        // ye line use kar skte he but niche wali line bhi change kre
        // if(arr[i]<pivat){ 
        if(arr[i]<=pivat){
            cnt++;
        }
    }
    int pivatIndex=cnt+s;
    swap(arr[pivatIndex],arr[s]);
    int i=s,j=e;
    while(i<pivatIndex  &&  j>pivatIndex){
        // while(arr[i]<pivat){
        while(arr[i]<=pivat){
            i++;
        }
        while(arr[j]>pivat){
            j--;
        }
        if(i<pivatIndex && j>pivatIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivatIndex;
}
void quicksort(int  *arr, int s, int e){
    //base condition
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);

}

int main(){

// int arr[5]={34,45,23,78,2};
// // int n=sizeof(arr)/sizeof(arr[0]);
// int n=5;

int arr[10]={3,2,4,56,3,2,3,543,423,34};
int n=10;
quicksort(arr,0,n-1);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}