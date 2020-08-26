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
int SoLonNhat(char* a, int n)
{
	int t = a[0];
	int i;
	for (i = 1; i <= n; i++)
	{
		if (a[i] > t)
			t = a[i];
	}
	return t;
}
int Tong(char* a, int n)
{
	int S = 0;
	for (int i = 0; i <= n; i++)
	{
		S = S + a[i];
	}
	return S;
}
int TBCong(char* a, int n)
{
	int Stb = Tong(a, n) / n;
	return Stb;
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
	printf("So lon nhat trong mang la: %d\n", SoLonNhat(a, n));
	printf("Tong cac phan tu trong mang la: %d\n", Tong(a, n));
	printf("Trung binh cong cac phan tu trong mang la: %d", TBCong(a, n));
}