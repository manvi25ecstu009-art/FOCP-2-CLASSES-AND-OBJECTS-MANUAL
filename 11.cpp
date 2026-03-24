#include<iostream>
using namespace std;
class course{
    public:
    string name;
    string instructorname;
    int duration;
    course(string n, string in, int d){
        name=n;
        instructorname=in;
        duration=d;
    }
    void detail(){
        cout<<"Name of course: "<<name<<endl;
        cout<<"Name of instructor: "<<instructorname<<endl;
        cout<<"Duration of course (in weeks): "<<duration<<endl;
    }
    ~course(){
        cout<<"The course "<<name<<" is deleted"<<endl;
    }
};
int main(){
    course c1("C++", "Shruti", 5);
    course c2("Mathematics", "Raman", 5);
    c1.detail();
    c2.detail();
}