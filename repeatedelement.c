#include<stdio.h>
void repeat(int a[],int m)
{
    int max=a[0],c[100]={0};
    for(int i=1;i<m;i++)
    {
        if(max<a[i])
            max=a[i];
    }



    for(int i=0;i<m;i++)
    {
        c[a[i]]+=1;
    }
    for(int i=0;i<=max;i++)
    {
        if(c[i]==1)
            printf("%d ",i);
    }
}
int main()
{
    int arr1[7]={4,2,6,6,4,1,3};
    repeat(arr1,7);
}
