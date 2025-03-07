#include<bits/stdc++.h>
#define N 50

using namespace std;

int main(){

    int array[N][N], row, column;

    cout<<"Enter the Number of Rows: ";
    cin>>row;
    cout<<"Enter the Number of columns: ";
    cin>>column;

    cout<<"Fill the Elements in the Array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>array[i][j];
        }
    }

    cout<<"Printing the Array: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    // Row Sum
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<column; j++){
            sum=sum+array[i][j];
        }
        cout<<"Row Sum: "<<sum<<endl;
        
    }

    // Column Sum
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<column; j++){
            sum=sum+array[j][i];
            
        }
        cout<<"Column Sum: "<<sum<<endl;
    }
    

    return 0;
}