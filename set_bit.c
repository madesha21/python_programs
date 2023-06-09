#include<stdio.h>
int main()
{
	unsigned int num, pos;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("Enter the position: ");
	scanf("%d",&pos);

	if( num & (1 << pos))
	{
		printf("Bit position is set :%d\n",num);
	}
	else
	{
		num= num | (1<< pos);
		printf("Its clear so setting the pos: %d\n",num);
	}
	return 0;
}


