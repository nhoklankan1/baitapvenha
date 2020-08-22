#include <stdio.h>
#include <string.h>
int stringlen(char* string)
{
	int len = 0;
	while (*(string + len++) != 0x00);
	return len - 1;

}char* Find(char* msg1, char* target)
{
	int i = 0;
	int strlen1 = stringlen(msg1);
	for (i = 0; i < strlen1 - 2; i++)
	{
		int j = 0;
		for (j = 0; j < stringlen(target); j++)
		{
			if (msg1[i + j] != target[j])
				break;
		}
		if (j >= stringlen(target))
			break;
	}
	return i;
}
char status(char* msg1, char* target, char* val) {
	int i = 0;
	char* start = Find(msg1, target) + stringlen(target) + 2;
	while (*(start + i) != '\"') 
	{
		*(val + i) = *(start + i);
		i++;
	}
	if (*(val + 1) != *("ON" + 1))
		return 0;
	return 1;
}
void main()
{
	char msg1[] = "{\r\n\"Fun\":\"ON\"\r\n\"Fan\":\"OFF\"\r\n\"TV\":\"ON\"\r\n}\n";
	printf(msg1);
	char target[] = "Fan";
	char val[8] = { 0 };
	printf("Vi tri cua %s la %d", target, Find(msg1, target));
	if (status(msg1, target, val) == 1)
		printf("ON");
	else
		printf("OFF");
}
