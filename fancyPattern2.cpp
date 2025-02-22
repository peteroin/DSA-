#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Rows: ";
    cin>>num;

    // Upper Triangle
    for(int row=0; row<num; row++){
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col != row){                     // Last Boundary/Number
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // Lower Inverted Triangle
    for(int row=0; row<num; row++){
        for(int col=0; col<num-row; col++){
            cout<<num-row;
            if(col != num-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}