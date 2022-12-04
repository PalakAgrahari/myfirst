#include<stdio.h>

void main()
{
    int *p;
    p=(int *)malloc(40);
    for(int i=0;i<=9;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d",*(p+i));
    }
}
