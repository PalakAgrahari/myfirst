
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *Next;
};
struct node *START;
struct node* GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
InsBegin(int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=START;
    START=p;
}
InsEnd(int x)
{
    struct node *q,*p;
    q=START;
    while(q->Next != NULL)
    {
        q=q->Next;
    }
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
}
Insinbetween(struct node *q,int x)
{
    struct node *p,*r;
    r=q->Next;
    p=GetNode();
    p->info=x;
    p->Next=r;
    q->Next=p;
}
Traverse()
{
    struct node *p;
    p=START;
    //int c=0,even=0,odd=0;
    while(p!=NULL)
    {
        int a=p->info;
        /*if(a%2==0)
            even++;
        else
            odd++;*/
        printf("%d ",p->info);
        p=p->Next;
        //c++;
    }
   /* printf("\n");
    printf("%d\n",c);
    printf("Even Nodes- %d\n",even);
     printf("Odd Nodes- %d\n",odd);*/
}
void search(int x)
{
    struct node *p;
    p=START;
    int flag=0;
    while(p != NULL)
    {
        int a=p->info;
        if(a==x)
            {
                flag=1;
                printf("\n%d",x);break;
            }
            p=p->Next;
    }
    if(flag==0)
    printf("-1");

}
int main()
{
    START=NULL;
    InsBegin(100);
    InsBegin(200);
    InsBegin(300);

    InsEnd(10);
    InsEnd(20);
    //Insinbetween(,15);

    Traverse();
    search(200);

}
