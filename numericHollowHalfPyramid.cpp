#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){

        
        for(int col=0; col<row+1; col++){
            if(col==0 || col==row || row==num-1){
                cout<<col+1;
            }
            
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}