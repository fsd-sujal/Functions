#include<stdio.h>

void divisible(int a)
{
	if(a % 3 == 0 && a % 5 == 0)
	{
		printf("This is Divisible With 3 or 5");
	}
	else
	{
		printf("This Is Not Divisible With 3 or 5");
	}
}
main()
{
	int a;
	printf("Enter The Any Number =");
	scanf("%d",&a);
	divisible(a);
}
