#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int Tong(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			S = S + i;
	}
	return S;
}
void main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Tong S = %d", Tong(n));
}