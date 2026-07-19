#include <stdio.h>
int main(){
int arr[] = {12, 48, 78, 90, 24};
int n = 4;

for(int i = n; i >= 0; i--){
    printf("%d,",arr[i]);
}

return 0;
}