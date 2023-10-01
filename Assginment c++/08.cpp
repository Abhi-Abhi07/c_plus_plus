// WAP to create two classes each consist of a number and member functions for 
// input/output. Compute and print the maximum between the two private data members by 
// using friend function.

#include<iostream>
using namespace std;
class one ;
class two;
class one {
    private:
    int a;
    public:
    int seta(){
        cout<<"Enter a number : "<<endl;
        cin>>a;
    }
    friend int gretest (one a, two b);
};
class two {
    private:
    int b;
    public:
    int setb(){
        cout<<"Enter second number : "<<endl;
        cin>>b;
    }
    friend int gretest (one a, two b);
};
int gretest (one x, two y){
    return (x.a>y.b)?x.a:y.b;
}

int main(){
one x;
two y;
x.seta();
y.setb();
cout<<"Greatest NUmber is : "<<gretest(x,y)<<endl;
return 0;
}

/*
#include<iostream>
using namespace std;
class one {
    public:
    int a;
    public:
    int seta(){
        cout<<"Enter a number : "<<endl;
        cin>>a;
    }
    friend int gretest (one a);
};
class two {
    public:
    int b;
    public:
    int setb(){
        cout<<"Enter second number : "<<endl;
        cin>>b;
    }
    friend int gretest (two b);
};
int gretest (one x, two y){
    return (x.a>y.b)?x.a:y.b;
}

int main(){
one x;
two y;
x.seta();
y.setb();
cout<<gretest(x,y)<<endl;
return 0;
}
*/