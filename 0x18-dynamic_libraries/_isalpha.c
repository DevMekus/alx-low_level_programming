#include "main.h"

/**
 * _isalpha - Custom function checking for alphabetic charactera
 * Return: 1 if alphabetical and 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
