#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int input = 0, temp;
	srand(time(NULL));
   	temp = rand()%100;
    
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&input);
		
	
    if(input > temp)
	{
		printf("ni cai da le\n");	
	}
	else if(input < temp)
	{
			printf("ni cai xiao le\n");
	}
	else if(input == temp)
	{
			printf("ni cai dui le\n");
			return 0;
	}
  }
	printf("daan%d\n", temp); 	
	return 0;
}
