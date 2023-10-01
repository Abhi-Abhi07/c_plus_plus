#include<iostream>
using namespace std;

int main(){

//Selection sort space complexcity O(1) hoti he
//time complexcity O(n^2) hoti he
//use case small array 

int arr[]={34,45,1,2,2,2,2,1,1,0,0,23,78,2};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"arr "<<n<<endl;
for(int i=0; i<n-1; i++){
    int minIndex=i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[i],arr[minIndex]);
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}