#include <stdio.h>
int add(int a, int b){
    return a+b;
}

int main(){
   int a,b;
printf("Enter two numbers:");
scanf("%d,%d",&a,&b);

int result = add(a,b);
printf("%d",result);
return 0;
}