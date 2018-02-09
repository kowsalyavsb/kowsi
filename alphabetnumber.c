#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
gets(s);

int a=strlen(s);
for(int i=0;i<=a;i++)
{
if((s[i]>='a')&&(s[i]<='z')&&(s[i]>='A')&&(s[i]<='Z'))
{
printf("\n given string  only alphabets%s",s);
}
else
{
printf("\n given string both numbers and alphabets %s",s);
}
return 0;
}
}
