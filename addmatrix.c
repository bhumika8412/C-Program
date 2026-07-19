#include <stdio.h>
int main(){
    int A[10][10], B[10][10], C[10][10];
    int i,j;
    int  column, row;
  printf("Enter the number of rows:");
  scanf("%d",&row);

  printf("Enter the number of columns:");
  scanf("%d",&column);

    // A matrix 
    printf("Enter the  elements of  matrix A:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
           scanf("%d\t",&A[i][j]);
        }
        printf("\n");
    }
     
      // B matrix
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            scanf("%d\t",&B[i][j]);
        }
        printf("\n");
    }

  // Adding two matrices (A and B)
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Resultant matrix (sum of A and B)
    printf("The sum of matrices:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf(" %d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}