#include<stdio.h>
int main()
{
	unsigned int num, count=0;
	printf("Enter the number: \n");
	scanf("%d",&num);
	while(num)
	{
		if(1 & num)
		{
			count++;
		}
		num=num >> 1;
	}
	printf("the count value: %d\n",count);

	if(count %2 == 0)
	{
		printf("Even parity \n");
	}
	else
	{
		printf("Odd parity\n");
	}
	return 0;

}
