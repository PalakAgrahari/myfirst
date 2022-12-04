#include<stdio.h>
int prcd(char a,char b)
{
    if(a=='^' || a=='*' || a=='%' || a=='/')
    {
        if(b=='^')
            return 0;
        return 1;
    }
    else
    {
        if( b== '+'|| b=='-')
        return 1;
        return 0;
    }

}
int main()
{

    if(prcd('*','*')==1)
        printf("True");
    else
        printf("False");

}
