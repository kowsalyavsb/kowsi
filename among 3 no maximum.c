#include <stdio.h>

int main(void) {
int m[3],i,j,temp,n;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%d\n",&m[i]);
}
for(i=1;i<=n;i++)
  {
	for(j=i+1;j<=n;j++)
	{
		if(m[i]>m[j])
		{
			temp=m[i];
			m[i]=m[j];
			m[j]=temp;
		}
	}
  }
  printf("%d\n",m[n]);
 
	return 0;
}
