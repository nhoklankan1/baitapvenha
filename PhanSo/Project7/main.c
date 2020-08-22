#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#pragma pack(push)
#pragma pack(1)
int min(int a, int b)
{
	return (a < b ? a : b);
}
int UCLN(int a, int b)
{
	for (int i = min(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
//typedef char soNguyen8Bit_t;
typedef struct PhanSo
{
	int Tu;
	int Mau;
}PS;
PS RutGon(PS a)
{
	PS c;
	c.Tu = a.Tu / UCLN(a.Tu, a.Mau);
	c.Mau = a.Mau / UCLN(a.Tu, a.Mau);
	return c;
}
PS Nhan(PS a, PS b)
{ 
	PS c;
	c.Tu = a.Tu * b.Tu;
	c.Mau = a.Mau * b.Mau;
	return c;
}
PS Cong(PS a, PS b)
{
	PS c;
	c.Tu = a.Tu * b.Mau + b.Tu * a.Mau;
	c.Mau = a.Mau * b.Mau;
	return c;
}
PS Tru(PS a, PS b)
{
	PS c;
	c.Tu = a.Tu * b.Mau - b.Tu * a.Mau;
	c.Mau = a.Mau * b.Mau;
	return c;
}
PS Chia(PS a, PS b)
{
	PS c;
	c.Tu = a.Tu * b.Mau;
	c.Mau = a.Mau * b.Tu;
	return c;
}
void print(PS a)
{
	printf("%d/%d", a.Tu, a.Mau);
}
void main()
{
	//char x = 1;
	//soNguyen8Bit_t y = 1;
	//struct PhanSo A;
	/*struct PhanSo* pA;
	pA->Tu = 1;
	struct PhanSo B;
	struct PhanSo C[3];
	C[0].Tu = 3;
	C[0].Mau = 4; */
	PS a, b, c;
	printf("Nhap phan so a:");
	scanf("%d%d", &a.Tu, &a.Mau);
	printf("Nhap phan so b:");
	scanf("%d%d", &b.Tu, &b.Mau);
	printf("\nRut gon phan so a ta duoc: ");
	a = RutGon(a);
	print(a);
	printf("\nRut gon phan so b ta duoc: ");
	b = RutGon(b);
	print(b);
	printf("\nTong 2 phan so a va b la: ");
	c = Cong(a, b);
	c = RutGon(c);
	print(c);
	printf("\nHieu 2 phan so a va b la: ");
	c = Tru(a, b);
	c = RutGon(c);
	print(c);
	printf("\nTich 2 phan so a va b la: ");
	c = Nhan(a, b);
	c = RutGon(c);
	print(c);
	printf("\nThuong 2 phan so a va b la: ");
	c = Chia(a, b);
	c = RutGon(c);
	print(c);
}