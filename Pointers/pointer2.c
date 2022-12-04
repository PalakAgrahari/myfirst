#include<stdio.h>
Traverse(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
int main()
{


int A[10]={1,2,3,4,5,6,7,8,9,10};
/*int *p;
p=&A[0];
for(int i=0;i<=9;i++)
{
    printf("%d",A[i]);

}
printf("\n");
for(int i=0;i<=9;i++)
{
    printf("%d",*(p+i));
}
printf("\n");
for(int i=0;i<=9;i++)
{
    printf("%d",*(A+i));
}*/

// for traverse function
Traverse(A,10);
return 0;
}
