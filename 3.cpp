#include<iostream>
using namespace std;
class rectangle{
    public: 
    float length;
    float breadth;
    rectangle(float l, float b){
        length=l;
        breadth=b;
    }
    void area(){
        float area=length*breadth;
        cout<<"The area of rectangle is: "<<area<<endl;
    }
};
int main(){
    rectangle r(5,5);
    r.area();
}