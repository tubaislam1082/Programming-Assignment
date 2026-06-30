#include<stdio.h>
int main()
{
    int n,r,sum,temp;
    printf("Enter a 3 digit number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    if(sum==n)
    printf("Armstrong Number");
    else
    printf("Not Armstrong");
    return 0;
    }
