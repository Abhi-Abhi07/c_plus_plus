#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter number : ";
cin>>n;
// creating 2d array
int** arr=new int*[n];

for(int i=0; i<n; i++){
    arr[i]=new int[n];
}
// creation done of 2d array

cout<<"Enter values : "<<endl;

// Taking input
for (int  i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
}

// Taking output
for (int  i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//Realsing memory
for(int i=0; i<n; i++){
    delete [] arr[i];
}
delete []arr;

return 0;
}