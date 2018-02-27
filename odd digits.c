#include <stdio.h>

int main()
{
	int n,d;
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		if(d%2==1)
		printf("%d ",d);
		n/=10;
	} 
	return 0;
}
