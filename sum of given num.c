#include <stdio.h>

int main(void) {
	int a[10],n,i,sum=0;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of numbers=%d",sum);
	return 0;
}
