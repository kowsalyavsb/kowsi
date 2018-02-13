#include <stdio.h>

int main(void) {
int min[3],i,j,temp,n;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%d\n",&min[i]);
}
for(i=1;i<=n;i++)
  {
	for(j=i+1;j<=n;j++)
	{
		if(min[i]<min[j])
		{
			temp=min[i];
			min[i]=min[j];
			min[j]=temp;
		}
	}
  }
  printf("%d\n",min[n]);
 
	return 0;
}
