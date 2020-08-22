#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
void KtSoNguyenTo(int n)
{
	int S = 0;
	int i;
	printf("Cac so nguyen to trong day tu 1 den n la:\t");
	for (i = 1; i <= n; i++)
	{
		int S = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				S = S + 1;
		}
		if (S == 2)
			printf("%d\t", i);
	}
}
void main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	KtSoNguyenTo(n);
}