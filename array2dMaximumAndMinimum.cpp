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

int findMaxAndMin(int array[][N], int row, int column){

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){

            if(array[i][j]>max){
                max=array[i][j];
            }

            if(array[i][j]<min){
                min=array[i][j];
            }
        }
    }

    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min;

}



int main(){

    int array[N][N], row, column;

    cout<<"Enter the Number of Rows: ";
    cin>>row;

    cout<<"Enter the Number of Column: ";
    cin>>column;

    fillArray(array, row, column);

    findMaxAndMin(array, row, column);

    return 0;
}