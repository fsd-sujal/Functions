#include<stdio.h>

void cube(int a)
{
	a = a*a*a;
	printf("The cube Is =%d",a);
}
void main()
{
	int a;
	printf("Enter Any Digit = ");
	scanf("%d",&a);
	cube(a);
}
