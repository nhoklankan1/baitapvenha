#include <stdio.h>
#include <math.h>
#define MAX 100
#define _CRT_SECURE_NO_WARNINGS
void nhapmang(char* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(char* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d", i, a[i]);
	}
}
void sapxeptangdan(char* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
}
void main()
{
	char a[MAX];
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d", &n);
	nhapmang(a, n);
	xuatmang(a, n);
	sapxeptangdan(a, n);
	xuatmang(a, n);
	/*for (int *i = &arr[0]; i <= &arr[n-1]; i++)
	{
		S = S + *i;
	}
	for (int i = 0; i < n; i++)
	{
		S = S 
	}
	printf("Tong cac phan tu trong arr_tinh la: %d", S);*/
}