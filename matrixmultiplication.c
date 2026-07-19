#include <stdio.h>
int main(){
    int i,j,k,A[10][10],B[10][10],C[10][10];
    int r1,c1,r2,c2;

    printf("Enter the number of row and columns of matrix A:\n");
    scanf("%d,%d",&r1,&c1);

    printf("Enter the numbers of rows and columns of matrix B:\n");
    scanf("%d,%d",&r2,&c2);


    printf("Enter the elements of A matrix:\n");
    for(i =0; i < r1; i++){
        for(j = 0; j < c1; j++){
       scanf("%d",&A[i][j]);
        }
    }


    printf("Enter the elements of B matrix:\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
      scanf("%d",&B[i][j]);
        }
    }

     for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            C[i][j] = 0;
            for(k = 0; k < c1; k++){
                C[i][j] += A[i][k] *  B[k][j];
            }
        }
     }

    printf("Product of A and B matrix is:\n");
    for(i = 0; i < r1; i++){
        for(i = 0; i < c2; i++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;

}