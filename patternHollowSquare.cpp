#include<iostream>

using namespace std;

int main(){
    int length;

    cout<<"HOLLOW SQUARE"<<endl;
    cout<<"Enter the length of Side: ";
    cin>>length;

    for(int row = 0; row < length; row++){
        for(int column = 0; column <length; column++){
            if((row == 0) || (column == 0) || (column == length - 1) || (row == length - 1)){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}