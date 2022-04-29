#include <stdio.h>

// creating a structure to store details

typedef struct
{
    char name;
    char grade;
    int roll_number;
} details;

int main()
{
    details arr[100];
    int n;
    char buffer;
    printf("There are how many students ? : ");
    scanf("%d", &n);
    scanf("%c", &buffer);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name , grade and roll number of student %d : ", i + 1);
        scanf("%s %c %d", &arr[i].name, &arr[i].grade, &arr[i].roll_number);
    }

    // printing the entered details of the students

    for (int i = 0; i < n; i++)
    {
        printf("\nThe name of student  %d is %s  ", i + 1, arr[i].name);
        printf("\nThe grade of student  %d is %c ", i + 1, arr[i].grade);
        printf("\nThe roll number of student  %d is %d  ", i + 1, arr[i].roll_number);
    }
    return 0;
}