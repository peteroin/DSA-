#include<iostream>

using namespace std;

int main(){

    int number;
    cout<<"---HOLLOW INVERTED HALF PYRAMID---"<<endl;
    cout<<"Enter the Length: ";
    cin>>number;
    for(int row = 0; row < number; row++){
        for(int column = 0; column < number; column++){
            if((row == 0) || (column == 0) || (column == number - row - 1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}