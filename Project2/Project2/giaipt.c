#include "giaipt.h"
float delta(float a, float b, float c)
{
	float i = (b * b) - (4 * a * c);
	printf("Gia tri i = %f\r\n", i);
	return i;
}

void giaipt(float a, float b, float c)
{
	float x1, x2;
	float i = delta(a, b, c);
	if (i > 0)
	{
		printf("Phuong trinh co 2 nghiem phan biet la\r\n");
		x1 = (-(b)+sqrt(i)) / (2 * a);
		x2 = (-(b)-sqrt(i)) / (2 * a);
		printf("x1 = %f\r\n", x1);
		printf("x2 = %f\r\n", x2);
	}
	if (i == 0)
	{
		x1 = x2 = -(b / (a * c));
		printf("Phuong trinh co kep la x1 = x2 = %f\r\n", x1);
	}
	if (i < 0)
		printf("Phuong trinh vo nghiem \r\n");
}
