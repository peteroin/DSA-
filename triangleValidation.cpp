#include <iostream>

using namespace std;

bool fcheckValid(float side1, float side2, float side3){
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
    return true;
    }
    else{
        return false;
    }
        
}

int main(){
    float side1, side2, side3;

    cout<<"---TRIANGLE VALIDATION---"<<endl;
    cout<<"Enter First side: ";
    cin>>side1;
    cout<<"Enter Second side: ";
    cin>>side2;
    cout<<"Enter Third side: ";
    cin>>side3;
    bool validation = fcheckValid(side1, side2, side3);
    cout<<"Given triangle with"<<" Side 1: "<<side1<<endl<<"                    Side 2: "<<side2<<endl<<"                    Side 3: "<<side3<<endl;
    if(validation){
        cout<<"                    is Valid";
    }
    else{
        cout<<"                    is Not Valid";
    }
        
}

