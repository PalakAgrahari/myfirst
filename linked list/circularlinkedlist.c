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
Insafter(struct node *q,int x)
{
    struct node *p,*r;
    r=q->Next;
    p=GetNode();
    p->info=x;
    p->Next=r;
    q->Next=p;
}
Insatposition(int x, int n)
{
    struct node *p,*q,*r;
    if(n==1)
       {

        InsBegin(x);return;}
        p=START;

    /*int y=count(START);
    if(n==y+1)
     {

     InsEnd(x);return;}*/
    int i=1;
    while(i<n-1 )
    {
        i++;
        p=p->Next;
    }

     r=p->Next;
    q = GetNode();
    q->info= x;
    q->Next=r;
    p->Next=q;


}
void DeleteBeg()
{
    if(START == NULL)
    {

    printf("Void Deletion");return;}
    struct node *p;
    p=START;
    START=START->Next;
    int x=p->info;
    free(p);
    printf("\n%d",x);


}
int DeleteAfter(struct node **p)
{

   struct node *q,*r;
    q=(*p)->Next;
    r=q->Next;
    (*p)->Next=r;
   int x=(*p)->info;
   free(q);
   return x;

}
int DeleteEnd(struct node *START)
{
    struct node *p,*q;
    p=START;
    q=NULL;
    while( p->Next != NULL)
    {
        q=p;
        p=p->Next;
    }
    q->Next=NULL;
    int x=p->info;
    free(p);
    return x;
}
OrderedInsertion(int x)
{
    struct node *p,*q;
    p=START;
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
        InsBegin(x);
    else
        Insafter(q,x);
}
int MidElement()
{
    struct node *t,*r;
    t=START;
    r=START->Next;
    while(r!= NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next;
        r=r->Next;

    }
    return t->info;
}
int IsCircular()
{
    struct node *t,*r;
    t=START;
    r=START->Next;
    while(r!= NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(r==t)
            return 1;

    }
    return 0;
}
Traverse()
{
    struct node *p;
    p=START;

    while(p!=NULL)
    {
        int a=p->info;

        printf("%d ",p->info);
        p=p->Next;
        }

}
int length()
{
     struct node *t,*r;
    t=START;
    r=START->Next;
    while(r!= NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next;
        r=r->Next;
        if(t==r)
            break;
    }
    int c=0;
    do{
        c++;
        t=t->Next;
    }
    while(t!=r);


    return c;
}
int start()
{
     struct node *t,*r;
    t=START;
    r=START->Next;
    while(r!= NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next;
        r=r->Next;
          if(t==r)
            break;
    }t=START;
    do{

        t=t->Next;
    }
    while(t!=r);

    return t->info;
}
int main()
{
    START=NULL;
    struct node *p,*q;
    InsBegin(90);
    InsBegin(70);
    InsBegin(50);
    InsBegin(30);
    InsBegin(20);
    InsBegin(10);
    InsEnd(100);
    //InsEnd(200);
    Traverse();
    p=START;
    while(p->Next !=NULL)
    {
        p=p->Next;
    }
    printf("\n%d",p->info);
    q=START;
    while(q->info != 70)
    {
        q=q->Next;
    }
    printf("\n%d",q->info);
    p->Next=q;
    //printf("\n%d",MidElement());
    int ans=IsCircular();
    if(ans==1)
        printf("\nCircular");
    else
        printf("\nNot Circular");
    printf("\n%d",length());
    printf("\n%d",start());
}
