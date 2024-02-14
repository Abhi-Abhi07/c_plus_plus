#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z' || ch>='0' && ch<='9'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}

bool valid(char ch){
    if(!isalnum(ch)){
        return false;
    }
    return true;
}
bool check(string str,int n){
    int s=0;
    int e=n-1;
    // while(s<=e){ input @ per ecpected output yes but show no
    while(s<e){
        while(!valid(str[s])){
            s++;
            // cout<<"s   "<<s<<endl;
        }
        while(!valid(str[e])){
            e--;
            // cout<<"e   "<<e<<endl;
        }
        if(toLowerCase(str[s])==toLowerCase(str[e])){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){

    string str=" h!la$&lH";
    if(check(str,str.length())){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}