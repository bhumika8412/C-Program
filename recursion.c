#include <stdio.h>
void countdown(int n){
    if(n==0){
        printf("Blast off!\n");
        return;}  //base case
    printf("%d\n",n);
    countdown(n-1);   //recursive call
} 
int main(){
    int number;
     
     printf("Enter the starting number: ");
     scanf("%d",&number);
    
    countdown(number);

    return 0;
}