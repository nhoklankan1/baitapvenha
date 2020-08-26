#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX 100

void nhapmang(char* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(char* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void main()
{
	char a[MAX];
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d", &n);
	nhapmang(a, n);
	printf("Xuat cac phan tu trong mang: \n");
	xuatmang(a, n);
}