#include<stdio.h>
int main()
{
    char s[10];
    printf("Enter the string\n");
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;}
        int k=i-1;
    while(k>=0)
    {


        for(int j=k;j<i;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
        k--;
    }
}
