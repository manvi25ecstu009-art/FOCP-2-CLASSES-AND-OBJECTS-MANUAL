#include<iostream>
using namespace std;
class laptop{
    public:
    string brand;
    float ram;
    float price;
    void setdetails(string b){
        brand=b;
        ram=0;
        price=0;
    }
    void setdetails(string b, float r){
        brand=b;
        ram=r;
        price=0;
    }
    void setdetails(string b, float r, float p){
        brand=b;
        ram=r;
        price=p;
    }
    void display(){
        cout<<"Brand is: "<<brand<<endl;
        cout<<"RAM is: "<<ram<<endl;
        cout<<"Price is: "<<price<<endl;
    }
};
int main(){
    laptop l1,l2,l3;
    l1.setdetails("Lenovo");
    l2.setdetails("Dell", 8);
    l3.setdetails("MacBook", 20, 100000);
    cout<<"LAPTOP 1: "<<endl;
    l1.display();
    cout<<"LAPTOP 2: "<<endl;
    l2.display();
    cout<<"LAPTOP 3: "<<endl;
    l3.display();
}