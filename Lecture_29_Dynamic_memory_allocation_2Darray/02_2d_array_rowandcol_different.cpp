
#include<iostream>
using namespace std;

int main(){

int row,col;

cout<<"Enter row : ";
cin>>row;

cout<<"Enter col : ";
cin>>col;

// creating 2d array
int** arr=new int*[row];

for(int i=0; i<row; i++){
    arr[i]=new int[col];
}
cout<<"Enter value : "<<endl;
// Taking input
for(int i=0; i<row; i++){
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
}

// Taking output
for(int i=0; i<row; i++){
    for (int j = 0; j < col; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout <<endl;
}


//Realsing memory
for(int i=0; i<row; i++){
    delete [] arr[i];
}
delete []arr;

return 0;
}