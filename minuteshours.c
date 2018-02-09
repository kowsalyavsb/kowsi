#include <stdio.h>

int main()
{
	int min,hours,time=130;
	min=time%60;
	hours=time/60;
	printf("min=%d\nhour= %d\n",min,hours);
	return 0;
}
