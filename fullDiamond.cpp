#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter NUmber of Rows: ";
    cin>>num;

    // Upper Triangle
    for(int row=0; row<num; row++){
        // Spaces
        for(int col=0; col<num-row; col++){
            cout<<" ";
        }
        // Stars
        for(int col=0; col< row+1; col++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    // Lower Inverted Triangle
    for(int row=0; row<num; row++){
        // Spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        // Stars
        for(int col=0; col<num-row; col++){
            cout<<" *";
        }
        cout<<"\n";
    }
}
