#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    float price;
    car(string b, float p){
        brand=b;
        price=p;
    }
    void display(){
        cout<<"brand: "<<brand<<endl;
        cout<<"price: "<<price<<endl;
    }
};
int main(){
    car c1("BMW", 100000);
    car c2("AUDI", 200000);
    cout<<"Details of first car: "<<endl;
    c1.display();
    cout<<"Details of second car: "<<endl;
    c2.display();
}