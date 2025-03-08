#include<bits/stdc++.h>
#define N 50

using namespace std;

void fillArray(int array[][N], int row, int column){

    cout<<"Fill the Elements in the Array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>array[i][j];
        }
    }

}
int findElement(int array[][N], int row, int column, int search){

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){

                if(array[i][j] == search){
                    cout<<search<<" is at Row = "<<i<<" and Column = "<<j<<"."<<endl;
                    return 1;
                
                }


            }
        }
        cout<<search<<" is not in the Array.";
        return 0;


}

int main(){

    int array[N][N], row, column, search;

    cout<<"Enter the Number of Rows: ";
    cin>>row;
    cout<<"Enter the Number of Columns: ";
    cin>>column;


    fillArray(array, row, column);

    cout<<"Enter the Elements to Search: ";
    cin>>search;
    findElement(array, row, column, search);


    return 0;
}