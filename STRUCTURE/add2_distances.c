#include <stdio.h>

typedef struct
{
    int feet;
    int inches;
} dist;

int main()
{
    dist d1, d2, sum;
    printf("Enter details of distance 1 :");
    printf("Enter feet for distance 1 :");
    scanf("%d", &d1.feet);
    printf("Enter inches for distance 1 : ");
    scanf("%d", &d1.inches);
    printf("Enter feet for distance 2 :");
    scanf("%d", &d2.feet);
    printf("Enter inches for distance 2 : ");
    scanf("%d", &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    while (sum.inches >12)
    {
        sum.inches = sum.inches - 12;
        ++sum.feet;
    }

    printf("The required sum of distances are as follows : %d %d ", sum.feet, sum.inches);
    return 0;
}