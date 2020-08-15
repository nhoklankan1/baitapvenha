#include <stdio.h>
void main()
{
	int val = 0xabcd;
	char low = 0;
	low = val;
	printf("%x\r\n", low);
	char high = 0;
	high = val >> 8;
	printf("%x\r\n", high);

	int val1 = 43981;
	char low1 = 0;
	low1 = val1;
	printf("%d\r\n", low1);
	char high1 = 0;
	high1 = val1 >> 8;
	printf("%d", high1);
}
