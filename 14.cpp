#include<iostream>
using namespace std;
class vehicle{
    public:
    string vehiclenumber;
    string ownername;
    string type;
    float fee;
    vehicle(){
        vehiclenumber="Not Assigned";
        ownername="Unknown";
        type="General";
        fee=0;
    }
    vehicle(string vn, string on){
        vehiclenumber=vn;
        ownername=on;
        type= "General";
        fee=0;
    }
    vehicle(string vn, string on, string t, float f){
        vehiclenumber=vn;
        ownername=on;
        type=t;
        fee=f;
    }
    void displayvehicle(){
        cout<<"Vehicle number is: "<< vehiclenumber<<endl;
        cout<<"The owner name is: "<< ownername<<endl;
        cout<<"Type is: "<< type<<endl;
        cout<<"The fee is: "<<fee<<endl;
    }
};
int main(){
    vehicle v1;
    vehicle v2("HR", "Rampal");
    vehicle v3("HS", "Krishnpal", "Auto", 2000);
    cout<<"Vehicle 1: "<<endl;
    v1.displayvehicle();
    cout<<"Vehicle 2: "<<endl;
    v2.displayvehicle();
    cout<<"Vehicle 3: "<<endl;
    v3.displayvehicle();
}