#include<stdio.h>
int main()
{
    char s[10];
    printf("Enter the string\n");
    gets(s);
    int freq[26]={0};
    int i=0;
    while(s[i]!='\0')
    {
        freq[s[i]-'a']++;
        i++;
    }
    int j=0;
    while(j<26)
    {
        if(freq[j]!=0)
        {
            printf("%c ",'a'+j);
             printf("%d ",freq[j]);
        }
j++;
    }
}
