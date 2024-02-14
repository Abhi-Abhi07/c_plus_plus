#include<iostream>
using namespace std;


bool binarySearch(int arr[], int s, int e, int key){

    //base case
    if(s>e){
        return 0;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return 1;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
int arr[]={2,4,5,8,13,16};
int size=sizeof(arr)/sizeof(arr[0]);

int key;
cout<<"Enter key : ";
cin>>key;
int s=0;
int e=size-1;
if(binarySearch(arr,s,e,key)){
    cout<<"Present"<<endl;
}
else{
    cout<<"Not present"<<endl;
}
return 0;
}