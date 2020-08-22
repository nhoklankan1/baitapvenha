#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b, int c)
{

	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
}
int max2so(int a, int b)
{
	return (a > b ? a : b);
}
int max3so(int a, int b, int c)
{
	int temp = max2so(a, b);
	int temp1 = max2so(temp, c);
	return temp1;
}
void main()
{
	int a, b, c;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	printf("\nMax = %d", max(a, b, c));
	printf("\nMax1 = %d", max3so(a, b, c));
}