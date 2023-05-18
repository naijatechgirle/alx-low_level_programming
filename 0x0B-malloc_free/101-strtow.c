#include <stdlib.h>
#include "main.h"

/**
 * count_word - fxn to count no of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int isFlag, i, j;

	isFlag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			isFlag = 0;
		}
		else if (isFlag == 0)
		{
			isFlag = 1;
			j++;
		}
	}
	return (j);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int h, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}

	for (h = 0; h <= length; h++)
	{
		if (str[h] == ' ' || str[h] == '\0')
		{
			if (h)
			{
				end = h;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = h;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
