#include <stdio.h>
int rescu(int n)
{
	if(n > 1)
	{
		return n*rescu(n - 1); //3*2*1
	}
}
int main()
{
	int number = 0;
	scanf("%d",&number);
	printf("%d",rescu(number));
	return 0;
}

