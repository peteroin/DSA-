#include<bits/stdc++.h>
#define N 50

using namespace std;

void fillMatrix(int matrix[N][N], int dimension){

    cout<<"Fill the Matrix: "<<endl;
    for(int i=0; i<dimension; i++){

        for(int j=0; j<dimension; j++){
            
            cin>>matrix[i][j];
        }
    }

    // Printing the Matrix
    cout<<"Matrix is: "<<endl;
    for(int i=0; i<dimension; i++){

        for(int j=0; j<dimension; j++){
            
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

// Column Wise Representaion
void sparseColumnWiseMatrix(int matrix[N][N], int dimension){

    int zero=0, nonzero=0;

    for(int i=0; i<dimension; i++){

        for(int j=0; j<dimension; j++){

            if(matrix[i][j]==0){
                zero+=1;
            }
            else{
                nonzero+=1;
            }

        }
    }

    

    if(zero<nonzero){
        cout<<"Not a Sparse Matrix"<<endl;
        
    }
    else{

        int sparse[N][N];
        int k=0;
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){

                if(matrix[i][j]!=0){
                    sparse[k][0]=i;
                    sparse[k][1]=j;
                    sparse[k][2]=matrix[i][j];
                    k++;
                }
                
            }
        }

        // Printing Sparse Matrix

        cout<<"Printing the Column Wise Sparse Matrix: "<<endl;
        for(int i=0; i<nonzero; i++){

            for(int j=0; j<3; j++){
                cout<<sparse[i][j]<<" ";
        }
            cout<<endl;
        }
    }

    
}

// Row Wise Representation
void sparseRowWiseMatrix(int matrix[N][N], int dimension){

    int zero=0, nonzero=0;
    for(int i=0; i<dimension; i++){
        for(int j=0; j<dimension; j++){
            if(matrix[i][j]==0){
                zero+=1;
            }
            else{
                nonzero+=1;
            }
        }
    }

    if(zero<nonzero){
        cout<<"Matrix is Not sparse."<<endl;
    }
    else{

        int sparse[N][N], k=0;

        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                
                if(matrix[i][j]!=0){
                    sparse[0][k]=i;
                    sparse[1][k]=j;
                    sparse[2][k]=matrix[i][j];
                    k++;
                }
            }
        }

        // Printing the Sparse Matrix

        cout<<"Printing the Row Wise Sparse Matrix: "<<endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<nonzero; j++){
                cout<<sparse[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}


int main(){

    int matrix[N][N], dimension;

    cout<<"Enter the Dimension of Matrix (NxN): ";
    cin>>dimension;
    fillMatrix(matrix, dimension);
    sparseColumnWiseMatrix(matrix, dimension);
    sparseRowWiseMatrix(matrix, dimension);
    
}