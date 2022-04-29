#include<stdio.h>

typedef struct add
{
    float real ;
    float imaginary;

}complex; 

complex add(complex n1 , complex n2);

int main()
{
    complex n1 , n2 , sum ;
    printf("Enter the real and imaginary part of complex number 1 : ");
    scanf("%f %f ",&n1.real,&n1.imaginary);
    printf("\n Enter the real and imaginary part of complex number 2 :");
    scanf("%f %f ",&n2.real,&n2.imaginary);

    sum  = add(n1, n2);
    printf("The result of the addtion of 2 complex numbers are : %f + i%f",sum.real ,sum.imaginary);
    return 0; 
}

complex add(complex n1 , complex n2)
{
    complex temp ;
    temp.real = n1.real + n2.real;
    temp.imaginary = n1.imaginary + n2.imaginary;
    return temp;
}