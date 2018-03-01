#include <stdio.h>

int main(void) {
	int a=2143,b,c=1;
	while(a!=0)
	{
		b=a%10;
		c=c*b;
		a=a/10;
	}
	printf("%d",c);
	return 0;
}
