//Right rotation of an array

#include <stdio.h>
int main(){

    int arr[100] = {34, 67, 78, 89, 90};
    int i, n = 5;
    int temp = arr[n-1];

    for(i = n-1; i > 0; i--){
        arr[i] = arr[i-1]; 
    }
   arr[0] = temp;
   
   printf("Array after rotation:");
   for(i = 0; i < n; i++){
    printf("\t%d\t",arr[i]);
   }
   return 0;
}