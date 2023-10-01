#include<iostream>
using namespace std;

void recursiveInsertion(int *arr, int n){
    if(n<=1){
        return;
    }
    int last=arr[n-1];
    int j=n-2;
    recursiveInsertion(arr,n-1);
    while(j>=0 && arr[j]>last){
        // arr[j+1]=arr[j];
        swap(arr[j+1],arr[j]);
        j--;
    }
    // arr[j+1]=last;
}

int main(){
    int arr[]={0,34,451,1,0,0,4,4,23,78,2};

int n=sizeof(arr)/sizeof(arr[0]);
cout<<"arr "<<n<<endl;

recursiveInsertion(arr,n);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}