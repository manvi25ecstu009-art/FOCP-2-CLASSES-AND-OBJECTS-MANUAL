#include<iostream>
using namespace std;
class mobile{
    public: 
    string brand;
    float price;
    float storage;
    mobile(string b, float p, float s){
        brand=b;
        price=p;
        storage=s;
    }
    mobile(string b){
        brand=b;
        price=0;
        storage=0;
    }
    mobile(string b, float p){
        brand=b;
        price=p;
        storage=0;
    }
    void display(){
        cout<<"The brand is: "<<brand<<endl;
        cout<<"The price is: "<<price<<endl;
        cout<<"The storage is (in GB): "<<storage<<endl;
    }
};
int main(){
    mobile m1("SAMSUNG", 30000, 18);
    mobile m2("APPLE");
    mobile m3("OPPO", 25000);
    m1.display();
    m2.display();
    m3.display();
}