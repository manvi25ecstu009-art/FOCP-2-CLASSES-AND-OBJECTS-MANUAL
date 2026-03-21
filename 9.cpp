#include<iostream>
using namespace std;
class electricitybill{
    public:
    void calculatebill(int units){
        float bill=5*units;
        cout<<"Bill is: "<<bill<<endl;
    }
    void calculatebill(int units, float rate){
        float bill= units*rate;
        cout<<"Bill is: "<<bill<<endl;
    }
    void calculatebill(int units, float rate, float fixedcharge){
        float bill= (units*rate)+fixedcharge;
        cout<<"Bill is: "<<bill<<endl;
    }
};
int main(){
    electricitybill e;
    e.calculatebill(2);
    e.calculatebill(100,2.5);
    e.calculatebill(10,2.5,20);
}