#include <stdio.h>
int main(){
int arr[] = {12, 48, 78, 90, 24};
int n = 5;
int i, max = arr[0], min = arr[0];

for(i = 0; i < n; i++){
    if(arr[i] > max){
        max = arr[i];
    }

    if(arr[i] < min){
        min = arr[i];

    }
}

printf("Maximum element is: %d\n", max);
printf("Minimum element is: %d\n", min);


return 0;
}