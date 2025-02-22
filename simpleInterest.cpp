#include<iostream>

using namespace std;

int main(){
    float principle, rate, time, simpleinterest;

    cout<<"---SIMPLE INTEREST CALCULATOR---"<<endl;
    cout<<"Enter Principle: ";
    cin>>principle;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Time: ";
    cin>>time;

    simpleinterest = principle*rate*time;

    cout<<"Simple Interest : "<<simpleinterest;

}