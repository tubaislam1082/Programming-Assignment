#include<stdio.h>
int main()
{
    int a,b,i,j,prime;
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        prime=1;
        if(i<2)
         prime=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            prime=0;
            break;
            }
        }
        if(prime)
        printf("%d ",i);
    }
}
