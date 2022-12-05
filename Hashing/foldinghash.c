#include<stdio.h>
#include<math.h>
long long power(long long a,long long b)
{
    if(b==0)
        return 1;
    return a*power(a,b-1);
}
long long nod(long long a)
{
    long long c=0;
    while(a!=0)
    {
        int d=a%10;
        c++;a/=10;
    }
    return c;
}
long long FoldingHash(long long key,long long ts)
{
    long long a=nod(ts-1);
    long long sum=0;
    long long l=0;
    long long z=power(10,a);
    printf("%lld\n",a);
    printf("%lld\n",z);

    while(key!=0)
    {
        long long b=key%z;
        sum+=b;
        key=key/z;
    }
        l=sum%z;
        l=l%ts;


    return l;
}
int main()
{
    long long key,ts;
    printf("Enter the table size");
    scanf("%lld",&ts);
    printf("Enter the key");
    scanf("%lld",&key);
    long long c=FoldingHash(key,ts);
    printf("%lld",c);
}
