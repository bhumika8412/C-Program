#include <stdio.h>
int main(){
    int choice;
    float area, length, side, breadth, radius;

    printf("\nChoose a shape\n");
    printf("1. Square\n");
    printf("2. Rectangle \n");
    printf("3. Circle\n");

    printf("\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter the side of Square:");
        scanf("%f",&side);

        area = side * side;
        printf("Area of the Square :%f",area);
        break;

        case 2:
        printf("Enter the length and breadth:");
        scanf("%f,%f",&length,&breadth);

        area = length * breadth;
        printf("Area of the Rectangle:%f",area);
        break;

        case 3:
        printf("Enter the radius: ");
        scanf("%f",&radius);

        area = 3.14 * radius * radius;
        printf("Area of the Circle: %f",area);
        break;

        default :
        printf("Invalid error");
    }
      return 0;
}