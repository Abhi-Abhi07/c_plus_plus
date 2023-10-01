#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>arr){
    int s=0;
    int e=arr.size()-1;

while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--; 
}
return arr;
}
void print(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

vector<int>arr;
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
arr.push_back(6);
arr.push_back(9);

vector<int> ans=reverse(arr);

print(ans);


return 0;
}