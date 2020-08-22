#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("n la so chan");
	else
		printf("n la so le");
}