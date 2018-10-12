#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int input = 0, temp;
	srand(time(NULL));
   	temp = rand()%100;

	printf("请输入你猜的数与系统产生的数相比：\n");
	for(int i = 0; i < 5; i++)
	{  
		scanf("%d",&input);
    	if(input > temp)
		{
			printf("你猜大了\n");	
		}	
		else if(input < temp)
		{	
			printf("你猜小了\n");
		}
		else if(input == temp)
		{
			printf("你猜对了\n");
			return 0;
		}
  }
	printf("你猜了5次都没猜对答案是：%d\n", temp); 	

	return 0;
}
