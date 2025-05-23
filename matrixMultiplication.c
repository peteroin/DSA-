#include<stdio.h>
#define N 50

int main(){

    int a[N][N], b[N][N], c[N][N], arow, acolumn, brow, bcolumn;
    printf("For Matrix A \n");
    printf("Enter Number of Rows & Columns: ");
    scanf("%d %d", &arow, &acolumn);
    printf("Fill the Matrix A:\n");

    for(int i=0; i<arow; i++){

        for(int j=0; j<acolumn; j++){

            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n \n For Matrix B\n");
    printf("Enter Number of Rows & Columns: ");
    scanf("%d %d", &brow, &bcolumn);
    printf("Fill the Matrix B:\n");

    for(int i=0; i<brow; i++){

        for(int j=0; j<bcolumn; j++){

            scanf("%d", &b[i][j]);
        }
    }

    if(acolumn != brow){
        printf("\nMatrix Multiplication Not possible");
    }
    else{

        // Multiplying Both Matrices
        for(int i=0; i<arow; i++){

            for(int j=0; j<bcolumn; j++){

                int sum=0;

                for(int k=0; k<brow; k++){

                    sum+=a[i][k]*b[k][j];
                }

                c[i][j]=sum;
            }
        }

        printf("Printing the Product Matrix: \n");
    for(int i=0; i<arow; i++){

        for(int j=0; j<bcolumn; j++){

            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
    }    
    return 0;
}