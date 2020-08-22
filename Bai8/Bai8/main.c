#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
float TinhS(float x, int n)
{
	float S = 1 + x;
	for (int i = 2; i <= n; i++)
	{
		S = S + (i * i);
	}
	return S;
}
void main()
{
	float x;
	printf("Nhap x = ");
	scanf("%f", &x);
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Tong S = %f", TinhS(x, n));
}