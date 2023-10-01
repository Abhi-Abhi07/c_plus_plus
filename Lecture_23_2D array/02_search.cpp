#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int row ,int col ){
    int i=row;
    int j=col;
    for(int i=0; i<3; i++){
    for (int j = 0; j<4; j++)
    {
        if(arr[i][j]==target){
            return 1;
        }
    }
}
return 0;
}
int main(){
int arr[3][4];
for(int i=0; i<3; i++){
    for (int j = 0; j<4; j++)
    {
        cin>>arr[i][j];
    }
}

for(int i=0; i<3; i++){
    for (int j = 0; j<4; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

int target;
cout<<"Enter target element : "<<endl;
cin>>target;

if(ispresent(arr,target,3,4)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;
}