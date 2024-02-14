#include<iostream>
using namespace std;


//print any number of entire array 
//or
//entire arr ko kisi bhi number se initialization
int main(){
int arr[10];
fill_n(arr,10,1);
for(int i=0; i<10; i++){
    cout<<arr[i]<<endl;
}



// //Array with function
// void printarr(int arr[], int size){
//     cout<<"printing the array !"<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
// int first[5]={2,3,4};
// printarr(first, 5);
// int second[13];
// fill_n(second,10,1);
// printarr(second,13);


// char ch[5]={'a','b','r' ,'d','u'};
// cout<<ch[3]<<endl;
// cout<<"printing the array !"<<endl;
//     for(int i=0; i<5; i++){
//         cout<<ch[i]<<" ";
//     }
//     cout<<endl;

// double don[3]={};
// cout<<don[2]<<endl;


/*
//size of array
int fifth[10];
int fifthsize=sizeof(fifth)/sizeof(int);
cout<<endl;
cout<<"size of fifth is "<<fifthsize<<endl;
*/


return 0;
}
