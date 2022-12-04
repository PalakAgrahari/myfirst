#include <stdio.h>
void insertelement(int a[], int n, int x)
{
    int i;
	for ( i = n - 1; i >= 0; i--)
        if(x<a[i])
    {
        a[i + 1] = a[i];
        a[i]=x;
    }
}

   int main()

{
    int a[100];
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;


     printf("enter what to insert");
     scanf("%d",&x);
     insertelement(a,n,x);
     n++;
     for( int i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
      return 0;

}

