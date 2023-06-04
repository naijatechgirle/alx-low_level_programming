#include "main.h"
int check_pal(char *s, int start, int end);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 on success else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns length of string
 * @s: string to cal length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively
 * for palindrome
 * @s: string to check
 * @start: iterator
 * @end: length of the string
 * Return: 1 on success else 0
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(s + start) != *(s + end - 1))
		return (0);
	return (check_pal(s, start + 1, end - 1));
}
