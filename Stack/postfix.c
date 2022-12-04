#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct stack {
    int item[STACKSIZE];
    int top;
};
struct stack S;

void initialize()
{
    S.top=-1;
}
int isEmpty()
{
    if(S.top==-1)
        return TRUE;
    else
        return FALSE;
}

int push(int x)
{
    if(S.top==STACKSIZE-1)
        {
            printf("\nStack Overflow");
        exit(1);
        }
    else
    {

        S.top++;
        S.item[S.top]=x;
    }
return 1;
}
int pop()
{
    if(isEmpty())
        {
            printf("\nStack UnderfLOW");
        exit(1);
        }
    int x=S.item[S.top];
    S.top--;
    return x;
}
int Stacktop()
{

    int x=S.item[S.top];
    return x;
}
int evaluate(int a,int b,char op)
{
    switch(op)
    {
        case '*':return a*b;
        case '+':return a+b;
        case '-':return a-b;
        case '&':return a&b;
        default: return a/b;
    }
}
int main()
{
   int i=0,a,b,val,x;
   char PS[20];
   char sym;
   initialize();
   scanf("%s",&PS);
   while(PS[i]!='\0')
   {
       sym=PS[i];
       if(sym>='0' && sym<='9')
       {
           push(sym-48);
       }
       else
       {
           b=pop();
           a=pop();
           val=evaluate(a,b,sym);
           push(val);
       }
       i++;

   }
   x=pop();
   printf("%d",x);
   return 0;


  }

