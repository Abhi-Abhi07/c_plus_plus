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
        // arr[j+1]=arr[j]; //its better
        swap(arr[j+1],arr[j]);
        j--;
    }
    // arr[j+1]=last;
}

void RRInsertion(int *arr,int i,int j,int temp,int n){
    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;
    cout<<arr[j]<<endl;
    cout<<temp<<endl;
    if(i>=n){
        return;
    }
    if(j<0){
        return;
    }
    if(arr[j]>temp){
        cout<<"Abhi"<<endl;
        arr[j+1]=arr[j];
    }
    // ye nhi karna why input arr[4]={5,7,4,3} dry run kar ke dekhe lo
    // initially arr[j]=5 && temp=7
    // if(5>7){condition false}
    // so ye starting me hi else me jakar main() me return kar jayega
    // else{ 
    //     return;
    // }
    RRInsertion(arr,i,j-1,temp,n);
    if(arr[j]==arr[j+1]){
        arr[j]=temp;
    }
    if(j==i-1){
        RRInsertion(arr,i+1,i,arr[i+1],n);
    }
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