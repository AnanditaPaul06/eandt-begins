#include<stdio.h>
int main()
{
	int a, b,c;
	printf("enter two numbers;");
	scanf_s("%d%d", &a, &b);
	c = a + b;
	printf("sum of two numbers is %d\n", c);
	return 0;
}