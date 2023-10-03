#include"main.h"
/**
 * _isalpha - function that checks ifa charachter is alphabetic character.
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

