//optimem code
#include<iostream>
using namespace std;

int main(){

int arr[3]={2,6,3};
//best case time complexcity O(n)
// space complexcity O(1) hoti he
//worst case time complexcity O(n^2) hoti he

int n=sizeof(arr)/sizeof(arr[0]);
cout<<"arr "<<n<<endl;

for(int i=0; i<n-1; i++){
    bool swaped=false;
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swaped=true;
        }    
    }
    if(swaped==false){
        break;
    }
}

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}




// #include<iostream>
// using namespace std;

// int main(){

// int arr[5]={34,45,23,78,2};

// //Selection sort space complexcity O(1) hoti he
// //time complexcity O(n^2) hoti he

// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<"arr "<<n<<endl;

// for(int i=0; i<n-1; i++){
//     for(int j=0; j<n-i-1; j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }    
//     }
// }

// for(int i=0; i<5; i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }