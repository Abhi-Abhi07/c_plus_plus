#include<iostream>
using namespace std;
void count(int n){
    if(n==0){
        return ;
    }
    count(n-1);
    printf("%d\n",n);

    // cout<<n<<endl;

    // printf("%d\n",n);
    // count(n-1);
}
int main(){
int n;
cout<<"Enter number : ";
// cin>>n;
scanf("%d",&n);
count(n);
return 0;
}