#include <stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 10, y = 34;
    swap(x,y);
    printf("%d %d",x,y);
    return 0;

}
    