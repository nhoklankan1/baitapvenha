#include <stdio.h>
int stringlen(char* string)
{
	int len = 0;
	while (*(string + len++) != 0x00);
	return len-1;

}
void main()
{
	char str_arr[] = "Hello";
	printf("len: %d\r\n", stringlen(str_arr));
	int len = stringlen(str_arr);
	for (int i = 0; i < len; i++)
	{
		if (str_arr[i] >= 97 && str_arr[i] <= 122)
			str_arr[i] = str_arr[i] - 32;
	}
	printf("%s", str_arr);
}