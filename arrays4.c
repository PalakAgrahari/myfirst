#include <stdio.h>
void deleteelement(int a[], int n, int x)
{  for (int i=0; i<n; i++)
    if(a[i]>x){
      a[i-1]=a[i];}
}
int main()

{
    int a[100],n,x;
    printf("enter sie of aray");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]);}
    printf("enter what to delete");
    scanf("%d",&x);
    deleteelement(a,n,x);
    for(int i=0;i<n-1;i++)
    { printf("%d",a[i]);}
    return 0;}
