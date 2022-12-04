
#include<stdio.h>
#include<malloc.h>

struct Student
{
    int rno;
    char name[20];
    double per;
};
struct Student S[20];

void input(struct Student *p,int n)
{
    for(int i=0;i<n;i++)
    {
            scanf("%d%s%lf",&((p+i)->rno),(p+i)->name,&((p+i)->per));

    }
}
void output(struct Student *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d %s %lf\n",((p+i)->rno),(p+i)->name,((p+i)->per));

    }

}


int main()
{
    int n;
    scanf("%d",&n);

    //struct Student S={234, "Rini",45.67};
    struct Student *p;
    p=(struct Student *)malloc(n*sizeof(struct Student));
    input(p,n);
    output(p,n);

    }
