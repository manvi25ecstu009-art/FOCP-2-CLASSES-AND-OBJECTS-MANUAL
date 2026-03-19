#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    float salary;
    employee(int id, float s){
        emp_id=id;
        salary=s;
    }
    void display(){
        cout<<"Employee id: "<<emp_id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    employee e1(25,100000);
    e1.display();
}