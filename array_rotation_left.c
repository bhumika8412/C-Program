 // Left rotation by one position

#include <stdio.h>
int main(){

    int arr[100] = {45, 67, 78, 66, 23};
    int i, n = 5;
    int temp = arr[0];

    for(i = 0; i < (n-1); i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    printf("Array after rotation:");
    for(i = 0; i < n; i++){
        printf("\t%d\t",arr[i]);
    }

    return 0;
}