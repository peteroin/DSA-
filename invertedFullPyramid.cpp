#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){
        //Spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //Star
        for(int col=0; col<num-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}