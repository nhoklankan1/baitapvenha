#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void KtSoHoanHao(int n)
{
	int S = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			S = S + i;
	}
	if (n == S)
		printf("n la so hoan hao");
	else
		printf("n khong phai la so hoan hao");
}
void main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	KtSoHoanHao(n);
}