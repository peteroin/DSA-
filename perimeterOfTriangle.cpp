#include<iostream>
#include<cmath>

using namespace std;


string fTriangleTyp(int side1, int side2, int side3){
    
    if ((side1 == side2) && (side2 == side3)){
        return "Equilateral";
    }
    else if ((side1 == side2) || (side2 == side3) || (side3 == side1)){
        return "Isosceles";
    }
    else {
        return "Scalene";
    }
    }

string fRightCheck(int side1, int side2, int side3){

    if (((pow(side1,2) + pow(side2,2)) == (pow(side3,2))) || ((pow(side2,2) + pow(side3,2)) == (pow(side1,2))) || ((pow(side3,2) + pow(side2,2)) == (pow(side1,2)))){
        return "This is a Right Triangle";
    }
    else{
        return "check";
    }
}

int main(){
    int side1, side2, side3, perimeter;

    cout<<"Enter the Length of First Side: ";
    cin>>side1;
    cout<<"Enter the Length of Second Side: ";
    cin>>side2;
    cout<<"Enter the Length of Third Side: ";
    cin>>side3;

    string triangleTyp = fTriangleTyp(side1, side2, side3);
    string rightCheck = fRightCheck(side1, side2, side3);

    perimeter = side1 + side2 + side3;

    cout<<"Perimeter of the "<<triangleTyp<<" Triangle for Given sides: "<<perimeter<<endl;
    cout<<rightCheck;

}