#include<stdio.h>
#include<stdlib.h>
struct node{
    int coef;
    int exp;
    struct node *Next;
};

struct node* GetNode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}
InsBegin(struct node **START, int x,int e)
{
    struct node *p;
    p=GetNode();
    p->coef=x;
    p->exp=e;
    p->Next=(*START);
   (*START)=p;
}
InsEnd(struct node **START, int x,int e)
{

    struct node *q,*p;
    q=(*START);
    if(q== NULL)
    {
       InsBegin(&(*START),x,e);
    }
    else{
    while(q->Next != NULL)
    {
        q=q->Next;
    }
    p=GetNode();
    p->coef=x;
    p->exp=e;
    p->Next=NULL;
    q->Next=p;
    }
}

Traverse(struct node **START)
{
    struct node *p;
    p=(*START);

    while(p!=NULL)
    {
        int a=p->coef;
        /*if(a%2==0)
            even++;
        else
            odd++;*/
        printf("%d ",p->coef);
        printf("%d\t ",p->exp);
        p=p->Next;
        //c++;
    }

}
void polyaddition(struct node **poly1,struct node **poly2)
{
    struct node *poly3,*p,*q;
    p=(*poly1);
    q=(*poly2);
    while(p!=NULL && q!=NULL)
    {
        if(p->exp == q->exp)
        {
            InsEnd(&poly3,p->coef+q->coef,p->exp);
            p=p->Next;
            q=q->Next;
        }
        else if(p->exp > q->exp)
        {
            InsEnd(&poly3,p->coef,p->exp);
            p=p->Next;
        }
        else{
           InsEnd(&poly3,q->coef,q->exp);
            q=q->Next;
        }
    }
    while(p!= NULL)
    {
       InsEnd(&poly3,p->coef,p->exp);
            p=p->Next;
    }
    while(q!= NULL)
    {
       InsEnd(&poly3,q->coef,q->exp);
            q=q->Next;
    }
   Traverse(poly3);


}
void polySubstraction(struct node **poly1,struct node **poly2)
{
    struct node *poly3, *q;
    q=(*poly2);
    while(q->Next != NULL)
    {
        q->coef=(-1)*(q->coef);
        q=q->Next;
    }
    polyaddition(&poly1,&poly2);


}
/*struct node* reverseusingLL(struct node **poly)
{
    //revpoly means reverse polynomial
    struct node *revpoly=NULL,*p;
    p=poly;
    while(p!=NULL)
    {
        InsBegin(&revpoly,p->coef,p->exp);
        p=p->Next;
    }
    return revpoly;
}*/
void rev(struct node **start)
{
    struct node *c,*p,*n;
    c=*start;
    p=NULL;
    n=c->Next;
    while(c!=NULL)
    {
        c->Next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->Next;
        }
    }
    *start=p;
    Traverse(start);
}

void main()
{
    struct node *poly1=NULL,*poly2=NULL;
    InsBegin(&poly1,2,4);
    InsEnd(&poly1,3,3);
    InsEnd(&poly1,4,2);
    InsEnd(&poly1,6,1);

    InsBegin(&poly2,3,4);
    InsEnd(&poly2,1,3);
    InsEnd(&poly2,5,2);
    InsEnd(&poly2,6,1);

 Traverse(&poly1);
 printf("\n");

 Traverse(&poly2);
 printf("\n");
 printf("\n");

 polyaddition(&poly1,&poly2);
// Traverse(ans1);
// printf("\n");

 //rev(&ans1);
 //Traverse(&ans2);
 //printf("\n");

 //struct node *ans2 =polySubstraction(&poly1,&poly2);
 //Traverse(&ans2);
 //printf("\n");


}
