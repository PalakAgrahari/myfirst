#include <stdio.h>
void insertelement(int a[], int n, int x, int pos)
{
    for (int i =n -1; i>= pos; i--)
		{a[i + 1] = a[i];}
    a[pos] = x;
}
int main()
{
    int a[100];
    int n;
    printf("enter sie of aray");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,pos;
    printf("enter where to insert");
    scanf("%d",&pos);

    printf("enter what to insert");
    scanf("%d",&x);
    insertelement(a,n,x,pos);
    n++;
    for( int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
      return 0;

}
