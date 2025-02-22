#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){

        // Stars
        for(int col=0; col<2*num-row-2; col++){
            cout<<"*";
        }
        for(int col=0; col<row+1; col++){
            cout<<row+1;
            if(col != row){
                cout<<"*";
            }
            
        }
        for(int col=0; col<2*num-row-2; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}