#include "main.h"
/**
 *_strcat - adds two strings,
 *@dest: destination'
 *@src: source,

 *Return: pointer ti dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int num1 = 0, num2 = 0;

	while(*(dest + num1) != '\0')
	{
		num1++;
	}

	while (num2 >= 0)
	{
		*(dest + num1) = *(src + num2);
		if((*src + num2) == '\0')
			break;
		num1++;
		num2++;
	}
	return (dest);
}

