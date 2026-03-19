#include<iostream>
using namespace std;
class BankAccount{
    public:
    int accountNumber;
    float balance;
    BankAccount(int ac, float b){
        accountNumber=ac;
        balance=b;
    }
    void display(){
        cout<<"Account number is: "<<accountNumber<<endl;
        cout<<"Balance is: "<<balance<<endl;
    }
};
int main(){
    BankAccount b1(2525, 303056.9);
    b1.display();
}