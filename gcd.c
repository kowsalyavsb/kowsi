#include <stdio.h>

int main()
{ 
	int k,m,s=1,i;
	scanf("%d %d",&k,&m);
	for(i=2;i<=m;i++)
	{
		if(k%i==0&&m%i==0)
		{
			s=s*i;
			break;
		}
	}
	printf("%d",s);
	return 0;
}
