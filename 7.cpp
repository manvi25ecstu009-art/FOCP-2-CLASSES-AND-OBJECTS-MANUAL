#include<iostream>
using namespace std;
class table{
    public:
    string material;
    float price;
    int legs;
    table(){
        material="Wood";
        price=5000;
        legs=4;
    }
    table(string m, float p){
        material=m;
        price=p;
    }
    table(string m, float p, int l){
        material=m;
        price=p;
        legs=l;
    }
    void display(){
        cout<<"Material: "<<material<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Legs: "<<legs<<endl;
    }
};
int main(){
    table t1;
    table t2("Glass", 25000);
    table t3("Marble", 30000, 4);
    cout<<"Table 1: "<<endl;
    t1.display();
    cout<<"Table 2: "<<endl;
    t2.display();
    cout<<"Table 3: "<<endl;
    t3.display();
}