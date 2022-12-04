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
