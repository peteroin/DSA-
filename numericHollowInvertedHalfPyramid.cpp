#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    
    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){
        for(int col=0; col<num-row; col++){
            if(col==0 || col==num-row-1 || row==0){
                cout<<col+1;
                
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}