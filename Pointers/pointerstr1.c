#include<stdio.h>
#include<malloc.h>
void input(struct Student *p,5)
{
    for(int i=0;i<5;i++)
    {
        scanf("%d%s%lf",&((p+i)->rno),(p+i)->name,&((p+i)->per));

    }
}
void output(struct Student *p,5)
{
    for(int i=0;i<5;i++)
    {
        printf("%d %s %lf\n",((p+i)->rno),(p+i)->name,((p+i)->per));

    }

}
struct Student
{
    int rno;
    char name[20];
    double per;
};
void main()
{
    struct Student S[5];
    //struct Student S={234, "Rini",45.67};
    struct Student *p;
    p=&S;
    input(p,5);
    output(p,5);




}
