#include<iostream>
using namespace std;
float volume(float side){
    return side*side*side;
}
float volume(float radius, float height){
    return 3.14*radius*radius*height;
}
float volume(float length, float breadth, float height){
    return length*breadth*height;
}
int main(){
    cout<<"Volume of cube is: "<<volume(2)<<endl;
    cout<<"Volume of cuboid is: "<<volume(2,4,8)<<endl;
    cout<<"Volume of cylinder is: "<<volume(4,5);
}