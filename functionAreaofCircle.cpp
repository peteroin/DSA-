#include<bits/stdc++.h>

using namespace std;

double funcArea(double radius){
    return (2*3.14*radius);
}

int main(){

    double radius;

    cout<<"Enter Radius of Circle: ";
    cin>>radius;

    double area=funcArea(radius);

    cout<<"Area of Circle, Whose Radius = "<<radius<<" is "<<area;

    return 0;
}