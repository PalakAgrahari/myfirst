
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
int main()
{
    char ps[20];int flag=0;
    scanf("%s",&ps);
    initialize();
    int i=0;
    while(ps[i]!='\0')
    {
        if(ps[i]=='(')
            push(ps[i]);
        else
        {
           if(!(isEmpty()))
                pop();
           else
           {
               flag=1;
               break;
           }
        }
    }
    if(flag==0)
    {
        if(isEmpty())
            printf("Correct");
        else
            printf("Not Correct");
    }
    else
        printf("Not Correct");
}
