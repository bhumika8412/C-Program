#include <stdio.h>
int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int *ptr = arr;  //points to the first element of array

    printf("Array traversing using pointers:\n");
    for( int i = 0; i< 5; i++){
        printf("%d\n",*(ptr+i));

    }
    return 0;
}

       