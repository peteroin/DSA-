#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Row: ";
    cin>>num;

    // Upper Triangle
    for(int row=0; row<num; row++){
        
        // Stars
        for(int col=0; col<num-row; col++){
            cout<<"*";
            
        }
        // Spaces
        for(int col=0; col<2*row+1; col++){
            cout<<" ";
        }
        // Stars
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Inverted Triangle
    for(int row=0; row<num; row++){

        // Stars
        for(int col=0; col<(row+1); col++){
            cout<<"*";
        }
        // Spaces
        for(int col=0; col<((2*num)-(2*row)-1); col++){
            cout<<" ";
        }
        // Stars
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}