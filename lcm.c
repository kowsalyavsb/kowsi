#include <stdio.h>

int main()
{ 
	int k,m,s=1,i ,d=1;
	scanf("%d %d",&k,&m);
	for(i=2;i<=m;i++)
	{
		if(k%i==0&&m%i==0)
		{
			s=i;
			break;
		}
	}
              d=(k*m)/i;	
	printf("%d",d);
	return 0;
}
