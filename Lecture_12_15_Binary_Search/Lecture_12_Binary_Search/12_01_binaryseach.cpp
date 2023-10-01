#include<iostream>
using namespace std;

int bainarysearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
int even[6]={2,4,6,8,10,12};
int odd[5]={1,3,5,6,7};

int key;
cout<<"Enter key : ";
cin>>key;

int evenIndex=bainarysearch(even,6,key);
int oddIndex=bainarysearch(odd,5,key);

cout<<"Index of "<<key<<" is : "<<evenIndex<<endl;
cout<<"Index of "<<key<<" is : "<<oddIndex<<endl;


return 0;
}