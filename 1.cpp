#include<iostream>
using namespace std;
class student{
    public:
    string name;
    float marks;
    student(string n, float m){
        name=n;
        marks=m;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    string name;
    float marks;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks: ";
    cin>>marks;
    student s(name,marks);
    s.display();
}