#include<iostream>
using namespace std;

int firstOCC(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    int ans=-1;
    while(mid<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
}

int lastOCC(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(mid<=e){ 
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}

int main(){

int arr[9]={1,2,3,3,3,3,3,5,7};
int key;
cout<<"Enter your key : ";
cin>>key;

int first=firstOCC(arr,9,key);
int second=lastOCC(arr,9,key);

cout<<"First and second index of "<<key<<" is : "<<first<<" "<<second<<endl;

//Total number of occrance 
// total=(last-first)+1;

cout<<"Total number of occrance : "<<(second-first)+1<<endl;

return 0;
}