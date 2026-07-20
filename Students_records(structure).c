// WAP a program which stores 5 different datatypes. 
#include <stdio.h>

struct Student{
    int roll;
    char name[100];
    float totalMarks;
    char grades;

    };

    int main(){
        struct Student s;

        printf("Enter a Roll No. : ");
        scanf("%d",&s.roll);

        printf("Enter the Name:");
        scanf("%s",&s.name);

        printf("Enter the totalMarks: ");
        scanf("%f",&s.totalMarks);

        printf("Enter the Grades:");
        scanf("%s",&s.grades);

        printf("\n Student Details:\n");
        printf("Name : %s\n",s.name);
        printf("Roll No. : %d\n",s.roll);
        printf("Marks : %f \n",s.totalMarks);
        printf("Grades : %c\n",s.grades);

        return 0;
    }