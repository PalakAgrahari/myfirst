#include<stdio.h>
#include"mystack.h"
#include<stdio.h>
#include<stdlib.h>
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


void infixtoprefix(char infix[])
{
    int i=0,p=0;
    initialize();
    char x,symbol;
    char prefix[20];
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        i++;
        if(symbol>='a' && symbol<='z')
        {
            prefix[p]=symbol;p++;
        }
        else{
            while(!(isEmpty()) && !(prcd(symbol,Stacktop())))
            {
                x=pop();
                prefix[p]=x;
                p++;
            }
            push(symbol);
        }

    }
    while(!(isEmpty()))
          {
              x=pop();
              prefix[p]=x;p++;
          }
          prefix[p]='\0';
          printf("%s",prefix);
}
int main()
{
    char infix[20];
    gets(infix);
    strrev(infix);
    infixtoprefix(infix);
    return 0;
}
