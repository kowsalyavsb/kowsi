#include <stdio.h>


int main() 
{
int n,i,c=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
   if(n%i==0)
   {
   c++;
   break;
   }
}
if(c==0)
{
printf("this is a prime number");
}
else
{
printf("this is a not prime number");

}
	return 0;
}
