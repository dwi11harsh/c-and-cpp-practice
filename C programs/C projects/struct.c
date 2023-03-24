//C program for entering details in an array. 
#include <stdio.h>
struct student {
    char fName[50];
    int rollno;
    float marks;
} stu[10];
int main() 
{
    int i;
    printf("Enter information of students:\n");
    // storing information
    for (i = 0; i < 5; ++i) {
        stu[i].rollno = i + 1;
        printf("\nFor roll number%d,\n", stu[i].rollno);
        printf("Enter first name: ");
        scanf("%s", stu[i].fName);
        printf("Enter marks: ");
        scanf("%f", &stu[i].marks);
    }
    printf("Displaying Information:\n\n");
    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(stu[i].fName);
        printf("Marks: %.1f", stu[i].marks);
        printf("\n");
    }
    return 0;
}