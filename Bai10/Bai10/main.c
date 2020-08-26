#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int Chon(int x, int y)
{
	int S = 0;
	if (x > y)
		S = (2 * x * 2 * y) + 1 - abs(x - 1);
	else
		S = (5 * x) - (3 * y * 3 * x);
	return S;
}
void main()
{
	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	int y;
	printf("Nhap y = ");
	scanf("%d", &y);
	printf("Tong S = %d", Chon(x, y));
}