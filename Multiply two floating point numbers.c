#include<stdio.h>

int main()
{
    float num1,num2,multi;

    printf("Enter two numbers");
    scanf("%f %f",&num1,&num2);

    multi = num1*num2;

    printf("Multiplication = %.2f",multi);

    return 0;
}
