#include<stdio.h>
void InsertionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                int t=a[j];a[j]=a[j-1];a[j-1]=t;
            }
            else
                break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void Bubblesort(int a[],int n)
{
    int c=0,t=0;
    for(int i=1;i<n;i++)
    {c=0;
        for(int j=0;j<=n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;c++;
            }

        }
        if(c==0)
            break;
    }
    printf("Sorted Array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[15],x,n;
    printf("Enter the no.of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
}
