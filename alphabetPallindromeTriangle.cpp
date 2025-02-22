#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cout<<"Enter Number of Row: ";
    cin>>num;

    for(int row=0; row<num; row++){
        char ch=65;
        for(int col=0; col<row+1; col++){
            if(col != row){
                cout<<ch;
            }           
            ch++;
        }
        ch--;
        for( ; ch>=65; ch--){
            cout<<ch;
        }
        cout<<endl;
    }
}