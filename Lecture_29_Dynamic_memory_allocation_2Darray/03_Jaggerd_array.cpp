#include<iostream>
using namespace std;

int main(){
int row;
cout<<"Enter total number of row : ";
cin>>row;

int **arr=new int*[row];
int *col=new int[row];

for(int i=0; i<row; i++){
    cout<<"Enter col of row "<<i+1<<" ";
    cin>>col[i];
    cout<<endl;
    arr[i]=new int[col[i]];
}

for(int i=0; i<row; i++){
    for(int j=0; j<col[i]; j++){
        cin>>arr[i][j];
    }
}

for(int i=0; i<row; i++){
    for(int j=0; j<col[i]; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for(int i=0; i<row; i++){
    delete []arr[i];
}
delete []arr;
return 0;
}


/*
#include <iostream>
using namespace std;

int main(void)
{
    cout << "Enter the number of arrays in the jagged array : ";
    int n;
    cin >> n;
    int** arr = new int*[n];
    int* sizes = new int[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter the number of elements in the first sub-array: ";
        cin >> sizes[i];
        arr[i] = new int[sizes[i]];
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<sizes[i];j++) {
            //printf("Enter the value of arr[%d][%d]: ", i, j);
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<sizes[i];j++) {
            //printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
            cout<<arr[i][j];
        }cout<<endl;
    }
    return 0;
}
*/