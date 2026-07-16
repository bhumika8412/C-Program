#include <stdio.h>
int main(){
    int i,j,s,n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        // for space
        for(j = 1; j <= n-i; j++){
            printf(" ");
        } //to print star      
        for(s = 1; s <= (2*i)-1; s++){
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}