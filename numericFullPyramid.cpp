#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    int digit;

    cout<<"Enter Number of Rows: ";
    cin>>num;

    for(int row=0; row<num; row++){
        digit=row;

        // Left Part --> Spaces
        for(int col=0; col<num-row-1; col++){
            cout<<"  ";
        }

        // Middle Part --> Digits
        for(int col=0; col<row+1; col++){
            cout<<digit+1<<" ";
            digit++;
        }

        // Right Part --> Digits
        for(int col=0; col<row; col++){
            cout<<digit-1<<" ";
            digit--;
        }
        cout<<endl;
    }
}