#include<iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    if(num%2==0){
        cout<<"Number-"<<num<<" is Even";
    }
    else
    cout<<"Number-"<<num<<" is Odd";
}
