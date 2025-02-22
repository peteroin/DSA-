#include<bits/stdc++.h>

using namespace std;

int main(){

    int number;

    cout<<"Enter Number of Row: ";
    cin>>number;

    for(int row = 0 ; row < number ; row++){
        int star = 0;                                                              // Renew (star = 0) for evey new row
        for(int column = 0 ; column < ((2*number) - 1) ; column++){                // Column is more than row 
            if(column < number - row -1){                                          // Print Spaces (Like Diagonal)
                cout<<" ";
            }
            else if(star < (2 * row + 1)){                                         // Odd star each row , only this if non hollow

                if( star == 0 || star == 2 * row || row == number - 1){            // (star = 0 and star = 2*row) are boundary conditions also (row == number - 1) is boundary conditions
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                star++;                                                             // Increment each time for odd Star in row
            }
            else{
                cout<<" ";                                                          // Spaces after star
            }
        }
        cout<<endl;
    }

}