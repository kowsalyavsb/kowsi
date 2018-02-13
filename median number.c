#include <stdio.h>
int main()
{
	int i,j,s[3],n=3,temp;

	for(i=0;i<n;i++)
	scanf("%d\n",&s[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(s[i]>s[j])
		{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		}
		}
	}
	
		printf("%d\n",s[(i+1)%2]);
	return 0;
}
