#include<stdio.h>
#include<stdlib.h>

 #define TRUE 1
 #define FALSE 1
struct node{
   char info;
    struct node *Next;
};

struct node* getnode(){
    struct node*p;
    p= (struct node*)malloc(sizeof(struct node));
    return p;
}

 /*void traverse(struct node *start){
    struct node*p;
    p=start;
    while(p!=NULL){
        printf("%c ", p->info);
         p=p->Next;
     }
}*/

 void InsBegin(struct node **start,char x){
  struct node*p;
   p=getnode();
   p->info=x;
   p->Next=(*start);
   *start=p;
 }

 void InsEnd(struct node **start,char x){
   struct node*p,*q;
   q=(*start);
   if(q==NULL){
   InsBegin(&(*start),x);
    }

   else{
      while(q->Next!=NULL){
      q=q->Next;
    }
     p=getnode();
     p->info=x;
     p->Next=NULL;
     q->Next=p;
   }

}/*Insatposition(int x, int n)
{
    struct node *p,*q,*r;
    if(n==1)
       {

        InsBegin(x);return;}
        p=START;

    /*int y=count(START);
    if(n==y+1)
     {

     InsEnd(x);return;}
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
}*/
 void InsAfter(struct node **q, char x){
  struct node *p,*r;
  p=getnode();
   p->info=x;
  r=(*q)->Next;  //p->next=q->next;
  p->Next=r;     //q->next=p;
 (*q)->Next=p;
}

void DeleteBeg(struct node **START)
{
    if((*START) == NULL)
    {

    printf("Void Deletion");return;
    }
    struct node *p;
    p=(*START);
    (*START)=(*START)->Next;
    int x=p->info;
    free(p);
    printf("\n%d",x);


}
int DeleteAfter(struct node **START, struct node **p)
{

   struct node *q,*r;
    q=(*p)->Next;
    r=q->Next;
    (*p)->Next=r;
   int x=(*p)->info;
   free(q);
   return x;

}
int DeleteEnd(struct node **START)
{
    struct node *p,*q;
    p=(*START);
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
/*OrderedInsertion(struct node **START,int x)
{
    struct node *p,*q;
    p=*START;
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
        InsBegin(&(*START),x);
    else
        InsAfter(&q,x);
}*/
Traverse(struct node **START)
{
    struct node *p;
    p=(*START);

    while(p!=NULL)
    {
        int a=p->info;

        printf("%c ",p->info);
        p=p->Next;
        //c++;
    }
}
/*LS(struct node *START,int x)
{
    struct node *p;
    p=START;
    int flag=0;
    while(p!=NULL)
    {
        int a=p->info;
        if(a == x)
        {
            flag=1;

            printf("\n%d ",p->info);
            break;}

    }
    printf("\n");
    if(flag==0)
        printf("-1");

}*/
void vowel(struct node **start)
{
    struct node *ans,*p;
    p=(*start);
     while(p!=NULL)
    {
        char n=p->info;
         if(n=='a' || n=='e'||n=='i'||n=='o'||n=='u')
            InsBegin(&ans,n);
        else
        {
            if(ans==NULL)
            InsBegin(&ans,n);
            else
            InsEnd(&ans,n);
        }
        p=p->Next;
    }
    Traverse(&ans);
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,'a');
    InsBegin(&START,'e');
    InsBegin(&START,'c');
    InsBegin(&START,'b');



    InsEnd(&START,'n');

    //Insinbetween(300,15);
    Traverse(&START);
   // LS(300);
    //DeleteBeg();

    //Traverse();
     printf("\n");
     vowel(&START);
    //OrderedInsertion(&START,22);
   //  Traverse(&START);

   // struct node *p;
   // p=START;

    /*Insatposition(35, 3);
        printf("\n");
        Traverse();*/
  //  for(int i=0;i<2;i++)
  //  {
   //       p=p->Next;
  //  }
   // InsAfter(&p,25);
   // printf("\n%d",DeleteAfter(p));

   // Traverse();
  //  printf("\n%d",DeleteAfter(p));
   // printf("\n%d",DeleteEnd(p));
  //  printf("\n");
  //  Traverse();*/

}
