#include<stdio.h>
#include<stdlib.h>
struct node{
  int info;
  struct node *Prev;
  struct node *Next;
};
struct node* getnode(){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBegin(struct node **dstart,int x){
  struct node*p;
  p=getnode();
  p->Prev=NULL;
  p->info=x;
   p->Next=*dstart;
  if((*dstart)!=NULL)
    dstart->Prev=p;
  else
    dstart=p;
 }
 void InsEnd(struct node **dstart,int x)
 {
   struct node*p,*q;
   p=(*dstart);
   q=getnode();
   q->info=x;
   q->Next=NULL;
   if((*dstart)==NULL){
    while(p->Next!=NULL)
    {
        p=p->Next;
        p->Next=q;
        q->Prev=p;
    }
    }

   else{
     q->Prev=NULL;
     dstart=q;
 }
 }
 void InsAfter(struct node **p,int x)
 {
     struct node *q,*r;
     q=getnode();
     q->info=x;
     r=(*p)->Next;
     (*p)->Next=q;
     (*p)->Prev=p;
     if(r!=NULL)
        q->Next=r;
     r->Next=q;

 }
 void Traverse(struct node **p)
 {

 }
 void main()
 {
     struct node *dstart;

 }
