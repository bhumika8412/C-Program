#include <stdio.h>
int main(){
    int arr[100], n, i, temp;

    printf("Enter the number  of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i = 0; i < n; i++){
        scanf("%d\t",&arr[i]);
    }

      //Reverse the array by swapping elements
      for(i = 0; i < n/2; i++){

        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
      }

      printf("Reversed array:\n");
      for(i = 0; i < n; i++){
        printf("%d\t",arr[i]);
      }
   return 0;
}