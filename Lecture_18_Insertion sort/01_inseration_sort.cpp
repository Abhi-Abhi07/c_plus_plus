#include<iostream>
using namespace std;

int main(){

int arr[5]={34,45,23,78,2};


int n=sizeof(arr)/sizeof(arr[0]);
cout<<"arr "<<n<<endl;

//best case time complexcity O(n)
// space complexcity O(1) hoti he
//worst case time complexcity O(n^2) hoti he
//use case small array and partially array
//Adaptable
//stable

for(int i=1; i<n; i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        } 
        j--;
    }
    // arr[j+1]=temp;
    arr[++j]=temp;
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
