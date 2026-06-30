#include<stdio.h>

int main()
{
    int n,first=0,second=1,next,i;
    scanf("%d",&n);
    printf("fibonacci series");
    for(i=1; i<=n; i++)
    {
    next = first + second;
    first = second;
    second = next;
    }
    return 0;
}
