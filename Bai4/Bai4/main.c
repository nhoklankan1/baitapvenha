#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min(int a, int b)
{
	return (a < b ? a : b);
}
int UCLN(int a, int b)
{
	for (int i = min(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int BCNN(int a, int b)
{
	return (a * b / UCLN(a, b));
}
int BCNN1(int a, int b)
{
	int c = a * b;
	for (int i = 1; i <= c; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
	}
}
void main()
{
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("UCLN = %d\n", UCLN(a, b));
	printf("BCNN = %d\n", BCNN(a, b));
	printf("BCNN1 = %d\n", BCNN1(a, b));
}