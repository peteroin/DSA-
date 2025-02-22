#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter Number of Row: ";
    cin>>num;

    // Upper Hollow Triangle
    for(int row=0; row<num; row++){
        // Spaces
        for(int col=0; col<num-row-1; col++){
            cout<<" ";
        }
        // Stars (Like Character -> Stars & Spaces)
        for(int col=0; col<2*row+1; col++){
            if(col==0){
                cout<<"*";
            }
            else if(col==2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;

    }

    // Inverted Lower Hollow Triangle
    for(int row=0; row<num; row++){
        // Spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        // Stars (Like Character -> Stars & Spaces)
        for(int col=0; col<2*num-2*row-1; col++){
            if(col==0 || col==2*num-2*row-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}