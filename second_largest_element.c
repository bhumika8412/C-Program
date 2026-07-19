#include <stdio.h>
int main(){
    int i, n, arr[100];
    int largest, second_largest;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    largest = second_largest = arr[0];
     for(i = 0; i < n; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }

        if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
     }
     printf("The second largest element is: %d\n", second_largest);

     return 0;
}