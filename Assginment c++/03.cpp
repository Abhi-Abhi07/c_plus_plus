// WAP to create a class "item" consist of item name(string), item code(integer) and item 
// cost(float) and member functions for input/output. Test your class for two items. 

#include<iostream>
#include<strings.h>
using namespace std;

class item{
    string name;
    int item_code;
    float item_price;
    public:
    void set_data(){
        cout<<"Enter the name of item : ";
        cin>>name;
        cout<<"Enter the code of item : ";
        cin>>item_code;
        cout<<"Enter the price of item : ";
        cin>>item_price;
    }
    void get_data(){
        cout<<"Item name is : "<<name<<endl;
        cout<<"Item code is : "<<item_code<<endl;
        cout<<"Item price is : "<<item_price<<endl;
    }
};

int main(){
item item1,item2;
cout<<"Enter detial of first item !"<<endl;
item1.set_data();
item1.get_data();

cout<<"Enter detial of second item !"<<endl;
item2.set_data();
item2.get_data();
return 0;
}