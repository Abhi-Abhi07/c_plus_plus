#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int N=1000000;
int arr[1000000+1];
void createSieve(){
    for(int i=2; i<=N; i++){
        arr[i]=1;
    }
    for(int i=2; i*i<=N; i++){
        if(arr[i]==1){
            for(int j=i*i; j<=N; j=j+i){
                arr[j]=0;
            }
        }
    }
}
vector<int>createPrime(int n){
    vector<int>v;
    for(int i=2; i<=n; i++){
        if(arr[i]==1){
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    createSieve();
    int t,r,l;
    cout<<"Enter Number of test cases : ";
    cin>>t;
    while(t--){
        cout<<endl<<"Enter r : ";
        cin>>r;
        cout<<"Enter l : ";
        cin>>l;
        // step 1 : create all primes till sqrt of r
        vector<int> primes = createPrime(int(sqrt(r)));
        // step 2 : create dummy array of size(r-l+1) and mark as 1
        int n=r-l+1;
        int dummuyArr[n];
        for(int i=0; i<n; i++){
            dummuyArr[i]=1;
        }
         // step 3 : for all prime number mark its multiple are false
        for(auto i:primes){
            int firstmultiple=(l/i)*i;
            if(firstmultiple<l){
                firstmultiple+=i;
            }
            for(int j=max(firstmultiple,i*i);j<=r; j=j+i){
                if(j%i==0){
                    dummuyArr[j-l]=0;
                }
            }
        } 
        // edge case
        if(l==0){
            dummuyArr[0]=0;
            dummuyArr[1]=0;
        }
        else if(l==1){
            dummuyArr[0]=0;
        }
        // step 4 : get all primes
        for(int i=l; i<=r; i++){
            if(dummuyArr[i-l]==1){
                cout<<i<<" ";
            }
        }

    }
return 0;
}