#include<iostream>
using namespace std;

int main(){
string st="I am work on this";

int n=st.length();
int s=0;
for(int i=0; i<=n; i++){
    if((st[i]==' ') || st[i]=='\0'){
        int e=i-1;
        while(s<e){
            swap(st[s++],st[e--]);
        }
        s=i+1;
    }
}
for (int i = 0; i < n; i++)
{
    cout<<st[i];
}

return 0;
}