#include<iostream>

using namespace std;

int main(){
    float num;

    cout<<"Enter a Number: ";
    cin>>num;
    if (num>0){
        cout<<num<<" is Positive Number";
    }
    else if(num<0){
        cout<<num<<" is Negative Number";
    }
    else
    cout<<num<<" is Zero";
}