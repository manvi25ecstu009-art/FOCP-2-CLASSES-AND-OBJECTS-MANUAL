#include<iostream>
using namespace std;
class product{
    public:
    string name;
    float price;
    int quantity;
    product(string n, float p, int q){
        name=n;
        price=p;
        quantity=q;
    }
    void totalcost(){
        float totalcost=price*quantity;
        cout<<"Product: "<<name<<endl;
        cout<<"The total cost is: "<<totalcost<<endl;
    }
    ~product(){
        cout<<"Product "<<name<<" removed from memory"<<endl;
    }
};
int main(){
    product p1("Prada", 3000, 5);
    product p2("LV", 4000, 2);
    p1.totalcost();
    p2.totalcost();
}