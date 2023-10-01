#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_back(4);

    cout<<d.front()<<endl;
    d.push_front(12);
    cout<<d.front()<<endl;
    d.pop_back();
    d.pop_front();
    cout<<d.front()<<endl;
return 0;
}