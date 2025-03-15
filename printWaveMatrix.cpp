#include<bits/stdc++.h>

using namespace std;

void wavePrintMatrix(vector<vector<int>> v){

    int rows = v.size();
    int cols = v[0].size();

    // Iterating Column Wise
    cout<<"Iterating Column Wise: ";
    for(int col=0; col<cols; col++){

        // Even number of Column --> Top to Bottom
        if(col % 2 == 0){
            for(int i=0; i<rows; i++){
                cout<<v[i][col]<<" ";
            }
        }
        // Odd number of Column --> Bottom to Top
        else{
            for(int i=rows-1; i>=0; i--){
                cout<<v[i][col]<<" ";
            }
        }
    }
    cout<<endl;


    // Iterating Row Wise
    cout<<"Iterating Row Wise: ";
    for(int row=0; row<rows; row++){

        // Even number of Rows --> Left to Right
        if(row % 2 == 0){
            for(int i=0; i<cols; i++){
                cout<<v[row][i]<<" ";
            }
        }
        // Odd number of Columns --> Right to Left
        else{
            for(int i=cols-1; i>=0; i--){
                cout<<v[row][i]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){

    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    wavePrintMatrix(v);

    return 0;
}