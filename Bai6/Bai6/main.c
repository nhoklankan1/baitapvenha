#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void KtSoChinhPhuong(int n)
{
	if (n > 3)
	{
		int i = sqrt(n);
		if (i * i == n)
			printf("n la so chinh phuong");
		else
			printf("n khong phai la so chinh phuong");
	}
	else
		printf("n khong phai la so chinh phuong");
}
void main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	KtSoChinhPhuong(n);
}