#include<iostream>

using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int i=0;
    int n=7;
    for(int i=0; i<n; i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

// #include<iostream>
// using namespace std;

// void swapalternate(int arr[], int size){
//     for(int i=0; i<size; i+=2){
//         if((i+1)<size){
//         // swap(arr[i],arr[i+1]);
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//         }
//     }
// }
// void printarr(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
// int even[6]={1,2,3,4,5,6};
// int odd[5]={1,7,3,4,6};

// swapalternate(even,6);
// printarr(even,6);
// swapalternate(odd,5);
// printarr(odd,5);
// return 0;
// }