#include<stdio.h>
#include<string.h>
int main()
{
    char k[30];
    int i,n;
    scanf("%s",k);
    n=strlen(k);
    for(i=0;i<n;i++)
     {
         if(k[i]=='0'||k[i]=='1'||k[i]=='2'||k[i]=='3'||k[i]=='4'||k[i]=='5'||k[i]=='6'||k[i]=='7'||k[i]=='8'||k[i]=='9')
         {
             printf("%c",k[i]);
         }
     }
     return 0;
}
