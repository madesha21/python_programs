#include<stdio.h>
int main()
{
	int num,n,m;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("Enter 'n' to check bit is set or not: ");
	scanf("%d",&n);

	printf("Enter 'm' to clear if n th bit is set: ");
    scanf("%d",&m);	

	if( num & (1 << n))
	{
		num=(num & ~(1 << m));   // To clear mth bit
	}

	printf("Updated value is %d:\n",num);

	return 0;
}
