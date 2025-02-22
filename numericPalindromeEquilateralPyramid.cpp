#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){

        // Spaces
        for(int col=0; col<num-row-1; col++){
            cout<<" ";
        }
        //Digits 
        int col; 
        for(col=0; col<row+1; col++){
            cout<<col+1;

        }
        col--;
        for(; col>=1; col--){
            cout<<col;
        }
        cout<<endl;
    }
}