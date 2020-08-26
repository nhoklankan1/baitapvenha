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
void xuatsonguyento(char* a, int n)
{
	int S = 0;
	int i;
	for (i = 0; i <= n; i++)
	{
		int S = 0;
		for (int j = 1; j <= a[i]; j++)
		{
			if (a[i] % j == 0)
				S = S + 1;
		}
		if (S == 2)
			printf("So nguyen to thu %d là %d\n", i, a[i]);
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
	xuatsonguyento(a, n);
}