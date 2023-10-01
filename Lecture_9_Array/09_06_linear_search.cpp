#include<iostream>
using namespace std;

bool search(int arr[], int size , int key){
    for(int i=0; i<size; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
int arr[10]={5,6,-6,8,-7,1,68,879,547,58};
cout<<"Enter the element you want to search :";
int key;
cin>>key;
bool found= search(arr,10,key);
if(found){
    cout<<"present"<<endl;
}
else{
    cout<<"Absent"<<endl;
}

return 0;
}