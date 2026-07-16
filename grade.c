#include <stdio.h>
int main(){
    int num;

    printf("Enter the marks:");
    scanf("%d",&num);

   if(num <= 100 || num > 75){
    printf("Grade : A ");
   }
   else if(num <= 75 || num > 50){
    printf("Grade : B");
   }
   else if(num <= 50 || num >=33){
   printf("Grade : C");
   }
   else{
    printf("Fail");
   }
   return 0;
}