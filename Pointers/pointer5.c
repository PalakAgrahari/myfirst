#include<stdio.h>
void input(int *p,int n)
{
     for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}
void output(int *p,int n)
{
     for(int i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
void main()
{

    int n;
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    input(p,n);
    output(p,n);

}
