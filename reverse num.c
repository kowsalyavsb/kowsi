#include <stdio.h>

int main(void) {
	 int n=36,rev;
	 while(n!=0)
	 {
	 	rev=n%10;
	 	printf("%d",rev);
	 	n=n/10;
	 }
	return 0;
}
