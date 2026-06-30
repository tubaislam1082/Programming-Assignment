#include<stdio.h>
int main()
{
 int n,square;
 printf("Enter a number");
 scanf("%d",&n);
 square=n*n;
 if(square%10==0)
    printf("Automorphic Number");
 else
    printf("Not Automorphic Number");

return 0 ;
}
