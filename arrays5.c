#include<stdio.h>
void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
}
int main()
{
    int a[100],n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
    reverse(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
