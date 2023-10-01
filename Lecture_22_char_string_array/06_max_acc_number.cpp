#include<iostream>
using namespace std;

char maxOccCharInString(string s){
    int arr[26]={0};
    //create an array of count of an character
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){//lowerrcase
            number=ch-'a';
        }
        else{//uppercase
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1, ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
    
}

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<"Ans : "<<maxOccCharInString(s)<<endl;
return 0;
}