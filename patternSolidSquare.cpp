#include<iostream>

using namespace std;

int main(){
    int length;

    cout<<"---SOLID SQUARE---"<<endl;
    cout<<"Enter the length of the side: ";
    cin>>length;

    for(int row = 0; row < length; row++){
        for(int column = 0; column < length; column++){
            cout<<"* ";
        }
        cout<<endl;
    }
}