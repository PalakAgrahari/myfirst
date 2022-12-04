#include<stdio.h>
int main()
{
    char s[10];
    printf("Enter the string\n");
    gets(s);
    int i=0;
    while(s[i]!='\0')
    {
        char d=s[i];
        if(d>='A' && d<='Z')
        {
            int j=((int)d-65)+97;
            s[i]=(char)j;
        }
        else if(d>='a' && d<='z')
        {
            int j=((int)d-97)+65;
            s[i]=(char)j;
        }
       i++;
    }
    puts(s);
}
