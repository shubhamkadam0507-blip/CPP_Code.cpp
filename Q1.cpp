#include<iostream>
using namespace std;

float area(float base, float height){
    return 0.5 * base * height;
}

float area(float radius){
    return 3.14 * radius * radius;
}

int main(){
    int base, height, radius;
    cout<<"enter base of triangle: ";
    cin>>base;
    cout<<"enter height of triangle: ";
    cin>>height;
    cout<<"the aea of triangle is: " <<area(base, height)<< endl;

    cout<<"enter radius of circle: ";
    cin>>radius;
    cout<<"the area of corcle is: " << area(radius)<<endl;
    return 0;
}
