#include<stdio.h>
int prime(int m)
{
    for(int i=2;i<=m/2;i++)
    {
        if(m%i==0)
            return 0;
    }
    return 1;
}
int NP(int n)
{
    while(n>0)
    {
        if(prime(n)==1)
        break;
    n--;
    }
    return n;
}
int DivisionHash(int key,int ts)
{
    int np=NP(ts);
    int l=key%np;
    return l;
}
int main()
{
    int key,ts;
    printf("Enter the table size");
    scanf("%d",&ts);
    printf("Enter the key");
    scanf("%d",&key);
    int c=DivisionHash(key,ts);
    printf("%d ",c);
}
