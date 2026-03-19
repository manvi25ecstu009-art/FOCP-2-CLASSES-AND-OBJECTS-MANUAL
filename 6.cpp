#include<iostream>
using namespace std;
class book{
    public: 
    string title;
    float price;
    book(string t, float p){
        title=t;
        price=p;
    }
    void display(){
        cout<<"Book title is: "<<title<<endl;
        cout<<"Book price is: "<<price<<endl;
    }
};
int main(){
    book b1("Harry Potter", 250);
    book b2("Mathematics", 300);
    book b3("C++", 400);
    b1.display();
    b2.display();
    b3.display();
}