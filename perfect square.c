#include <stdio.h>

int main()  
{
	int a,b,c,k;
	scanf("%d %d",&a,&b);
	c=a*b;
	for(k=1;k<=100;k++)
	{
		if(c==(k*k))
		{
			printf("the given number is perfect square");
		}
	}		return 0;
}
