#include <stdio.h>

struct Student{
    char name[100];
    int rollNo ;
    float marks;
};

int main(){
    struct Student students[4];
    int n;

    printf("Enter the number of students:");
    scanf("%d",&n);

    // Input records
    for(int i = 0; i < n ; i++){
        printf("\nEnter the details for Student %d \n", i+1);
        printf("Name :");
        scanf("%s",&students[i].name);
     
        printf("Roll No. :");
        scanf("%d",&students[i].rollNo);

        printf("Marks :");
        scanf("%f",&students[i].marks);
    }

    return 0;
}