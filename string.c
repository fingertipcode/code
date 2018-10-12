#include <stdio.h>
#include <string.h>

int main()
{
	char *p = NULL;
	char  a[100] = "";	
	int len = 0;

	p = a;
	scanf("%s",p);
  	len = strlen(p);
	
	for(int i = len -1; i >= 0; i--)
	{ 
		printf("%c",*(p+i));
	}
	return 0;
}
