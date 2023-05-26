#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	int num1, num2;
	printf(" 1.Addition\n 2.Substraction\n");
	printf("3.Multplication\n 4.Division\n 5.Quit\n");

	do
	{
		printf("\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the numbers num1 and num2\n");
				scanf("%d%d",&num1,&num2);
				printf("num1+num2=%d\n",num1+num2);
				break;

			case 2:
				printf("\nEnter the num1 and num2: ");
				scanf("%d%d",&num1,&num2);
				printf("num1-num2=%d\n",num1-num2);
				break;
			case 3:
				printf("\n Enter the num1 and num2: ");
				scanf("%d%d",&num1,&num2);
				printf("num1 * num2=%d\n",num1*num2);
				break;
			case 4:
				printf("\n ENter the num1 and num2: ");
				scanf("%d%d",&num1,&num2);
				printf("num1/num2=%d\n",num1/num2);
				break;
			case 5:
				printf("existing from programs\n");
				exit(0);
			default:
				printf("Invalid choice<Enter number 1 to 5 only>\n");
		}
	}while(choice != 5);

}
