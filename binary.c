#include<stdio.h>
int print_bits(int, int);
int main()
{
	int num, n;
	printf("Enter the number and n: ");
	scanf("%d%d",&num,&n);

	printf("Binary format of num %d: \n",num);
	print_bits(num,n);

	return 0;
}
int print_bits(int num,int n)
{
	int i;

	if( n > sizeof(int)*8)
	{
		n= sizeof(int)*8;
	}

	for(i=n-1; i>=0;i--)
	{
		if((1 << i)&num)
		{
			printf(" 1");
		}
		else
		{
			printf(" 0");
		}

	}
	printf("\n");
}
