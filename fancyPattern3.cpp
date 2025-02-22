#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Rows: ";
    cin>>num;

    // Upper Triangle
    for(int row=0; row<num; row++){

        // Left Triangle
        int col;
        for(col=0; col<row+1; col++){

            if(col==0){
                cout<<"*";
            }
            else{
                cout<<col;
            }
            
        }

        
        // For Palindrom Triangle / Right Triangle
        col--;
        col--;
        for( ; col>=0; col--){

            if(col==0){
                cout<<"*";
            }
            else{
                cout<<col;
            }
            
        }
        cout<<endl;
    }



    num--;
    // Lower Inverted Triangle
    for(int row=0; row<num; row++){

        // Left Triangle
        int col;
        for(col=0; col<num-row; col++){
            if(col==0){
                cout<<"*";
            }
            else{
                cout<<col;
            }
            
        }

        // For Palindrom Triangle / Right Triangle
        col--;
        col--;
        for( ; col>=0; col--){
            if(col==0){
                cout<<"*";
            }
            else{
                cout<<col;
            }
            
        }
        cout<<endl;
    }
}