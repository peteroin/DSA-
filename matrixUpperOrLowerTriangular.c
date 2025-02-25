#include<stdio.h>
#define N 50

int fillMatrix(int a[N][N], int dimension){

    printf("\n Fill the Elements in the Matrix: \n");

    for(int i=0; i<dimension; i++){

        for (int j=0; j<dimension; j++){
            scanf("%d", &a[i][j]);
        }
    }

}

void checkMatrix(int a[N][N], int dimension){

    //Checking the Matrix is Upper Triangular or Lower Triangular
    int upper=1, lower=1;

    for(int i=0; i<dimension; i++){

        for(int j=0; j<dimension; j++){

            if( i>j && a[i][j]!=0){
                upper=0;
            }

            if( i<j && a[i][j]!=0){
                lower=0;
            }
        }
    }

    if(upper && lower){
        printf("\n \nMatrix is Diagonal.");
    }
    else if(upper){
        printf("\n \nMatrix is Upper Triangular.");
    }
    else if(lower){
        printf("\n \nMatrix is lower.");
    }
    else{
        printf("Matrix is Neither Upper of Lower Triangular.");
    }


}

int main(){

    int a[N][N], dimension;

    printf("Enter the the Dimensions of Matrix (N x N): ");
    scanf("%d", &dimension);


    fillMatrix(a, dimension);

    checkMatrix(a, dimension);

    

    return 0;
}