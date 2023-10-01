#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // *p=*p+1;//its update value both function (main & update)

    p=p+1;//its update only inside the update function
    cout<<"inside : "<<p<<endl;
}

//arr[] & *arr dono ek hi baat he
// int getSum(int arr[], int n)
int getSum(int *arr, int n)

{
    int sum=0;
    cout<<"Size : "<<sizeof(arr)<<endl;//yha arr ek pointer he
    //so size pointer ka hi aayega na ki entire array ka
    for(int i=0; i<n; i++){
        sum=sum+i[arr];
    }
    return sum;
}
int main(){

int i=7;

int *p=&i;

print(p);


cout<<"Before : "<<*p<<endl;
cout<<"Before : "<<p<<endl;
update(p);
cout<<"After : "<<*p<<endl;
cout<<"After : "<<p<<endl;


int arr[5]={1,2,3,4,5};

cout<<"Sum : "<<getSum(arr,5)<<endl;
return 0;
}