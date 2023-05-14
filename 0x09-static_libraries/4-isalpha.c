#include "main.h"
/**
 * _isalpha - check alphabet character
 * @c: char to check
 *
 * Return: 1 if c is a letter, else 0;
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
