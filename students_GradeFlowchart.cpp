#include<iostream>

using namespace std;

int main(){
    float num;

    cout<<"Enter the Number: ";
    cin>>num;

    if(num>=90){
        cout<<"Your Grade is A";
    }
    else if(num>=80){
        cout<<"Your Grade is B";
    }
    else if(num>=70){
        cout<<"Your Gradde is C";
    }
    else if(num>=60){
        cout<<"Your Grade is D";
    }
    else {
        cout<<"Your Grade is F";
    }
}