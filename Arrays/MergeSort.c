#include<stdio.h>
    int c[5];

void Merge(int a[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1,k=low;
    while(i<=low && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        c[k]=a[j];
        j++;k++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=c[i];
    }
}

void MergeSort(int a[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}

int main()
{
    int a[5],i;
    printf("Enter the elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    MergeSort(a,0,4);
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
