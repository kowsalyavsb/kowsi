
#include <stdio.h>

int main(void) {
	int i;
	char name[100];
	scanf("%[^\n]s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if(i==0 )
		{
			if(name[i]>='a' && name[i]<='z')
			{
				name[i]=name[i]-32;
				
			}
		}
	          if(name[i]==' ')
		{
			++i;
			if(name[i]>='a' && name[i]<='z')
			{
				name[i]=name[i]-32;
			}
		}
	}
	printf("%s",name);
	return 0;
}
