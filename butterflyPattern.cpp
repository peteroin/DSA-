#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Row: ";
    cin>>num;


    // Upper Part
    for(int row=0; row<num; row++){
        
        // Left Part --> Stars
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        
        // Middle Part --> Spaces
        for(int col=0; col<2*num-2*row-2; col++){
            cout<<" ";
        }

        // Right Part --> Stars
        for(int col=0; col<row+1; col++){
            cout<<"*";
        }
        cout<<endl;
    }


    
    // Lower Part
    for(int row=0; row<num; row++){

        // Left Part --> Stars
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }

        // Middle Part --> Spaces
        for(int col=0; col<2*row; col++){
            cout<<" ";
        }

        // Right Part --> Stars
        for(int col=0; col<num-row; col++){
            cout<<"*";
        }

        cout<<endl;
        
    }

    
    
}