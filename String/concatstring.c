#include<stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    printf("Enter !st string\n");
    gets(str1);
    printf("Enter 2nd string\n");
    gets(str2);
    int i=0,j=0;
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;j++;
    }
    str1[i]='\0';
    printf(str1);
}
