#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"---PRINTING EVEN NUMBER---"<<endl;
    cout<<"Enter the Number: ";
    cin>>number;
    for (int i = 1; number >= i; i++){
        if(i % 2 == 0){
            cout<<i<<endl;
        }
    }
}