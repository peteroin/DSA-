#include<iostream>

using namespace std;

int fmaxCheck(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    }
    else if (num2 > num1 && num2 > num3){
        return num2;
    }
    else if (num3 > num1 && num3 > num2){
        return num3;
    }
}

int main(){
    int num1, num2, num3;
    cout<<"---MAX OF THREE NUMBERS---"<<endl;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;

    int max = fmaxCheck(num1, num2, num3);
    cout<<"Maximum Number among Given Number is: "<<max;
}