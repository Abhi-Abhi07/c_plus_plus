#include<iostream>
#include<map>
#include<unordered_map>
#include<limits.h>
#include<vector>
using namespace std;

int main(){
    unordered_map<string,int>m;

    // insertion
    // 1
    pair<string,int>pair1("Abhi",3);
    m.insert(pair1);

    // 2
    pair<string,int>pair2=make_pair("love",5);
    m.insert(pair2);

    // 3
    pair<string,int>pair3;
    pair3.first="All";
    pair3.second=1;
    m.insert(pair3);

    // 4
    m["Right"]=7;

    // what will happen
    m["love"]=10;

    // searching
    cout<<m["love"]<<endl;
    cout<<m.at("Abhi")<<endl;

    // cout<<endl<<m.at("unknownkey")<<endl;
    cout<<endl<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    // size
    cout<<"Size : "<<m.size()<<endl;

    // to check present
    cout<<m.count("Right")<<endl;

    // remove
    cout<<"Remove"<<endl;
    cout<<m.erase("Right")<<endl;
    // cout<<m.at("Right")<<endl;
    cout<<m.erase("Right")<<endl;

    // unordered_map me value Random hoti hai
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    cout<<"Complete"<<endl;
return 0;
}