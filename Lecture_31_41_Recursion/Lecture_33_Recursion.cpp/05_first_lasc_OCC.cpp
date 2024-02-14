#include<iostream>
using namespace std;

int firstOcc(int *arr,int s, int e, int key,int ans){
    int mid=(s+e)/2;
    if(s<=e){
        if(arr[mid]==key){
            ans = mid;
            return firstOcc(arr,s,mid-1,key,ans);
        }
        else if(arr[mid]>key){
            return firstOcc(arr,s,mid-1,key,ans);
        }
        else{
            return firstOcc(arr,mid+1,e,key,ans);
        }
    }
    return ans;
}

int lastOcc(int *arr,int s, int e, int key, int ans){
    int mid=(s+e)/2;
    if(s<=e){
        if(arr[mid]==key){
            ans=mid;
            return lastOcc(arr,mid+1,e,key,ans);
        }
        else if(arr[mid]>key){
            return lastOcc(arr,s,mid-1,key,ans);
        }
        else{
            return lastOcc(arr,mid+1,e,key,ans);
        }
    }
    return ans;
}
int main(){
    int arr[]={2,4,7,9,13,16,16,16,16,17,18,18,18,20,23,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter key : ";
    cin>>key;
    int s=0;
    int ans=-1;
    cout<<"First : "<<firstOcc(arr,s,n-1,key,ans)<<endl;
    cout<<"Last : "<<lastOcc(arr,s,n-1,key,ans)<<endl;
return 0;
}