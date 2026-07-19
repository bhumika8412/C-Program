#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    //Dynamically allocate memory 
    int *arr = (int *)malloc(n * sizeof(int));

    //Check if the memory allocation was succesful
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("enter %d elements:\n",n);

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements are:\n");

    for (int i = 0; i < n; i++ ){
        printf("%d\t",*(arr+i));
    }

    //Free the allocated memory
    free(arr);
    return 0;
}