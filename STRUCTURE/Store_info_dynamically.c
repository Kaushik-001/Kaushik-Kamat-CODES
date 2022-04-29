#include <stdio.h>
#include <stdlib.h>

// creating a structure to store information of a student
typedef struct
{
    char name[50];
    int roll_number;
    char stream[50];
} details;

int main()
{
    details *arr;
    int n;
    char buffer;
    printf("Enter the number of students :");
    scanf("%d", &n);
    scanf("%c", &buffer);
    arr = (details *)malloc(n * sizeof(details));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name , roll number and stream of student %d : ", i + 1);
        scanf("%s\t%d\t%s", &arr[i].name, &arr[i].roll_number, &arr[i].stream);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The name of student %d is %s", i + 1, arr[i].name);
        printf("\nThe roll number of student %d is %d", i + 1, arr[i].roll_number);
        printf("\nThe stream of student %d is %s", i + 1, arr[i].stream);
    }
    return 0;
}
