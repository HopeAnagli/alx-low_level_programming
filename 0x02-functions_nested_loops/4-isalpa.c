#include "main.h"

/**
 * _isalpha - prints alphabet whether lowercase or uppercase
 *
 * @c - parameter to be checked
 *
 * Return: 1 if it is a letter
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((C >= 97 && C <= 122)) || (c >= 65 && c <=90)
		return (1);
	else
		return (0);
}
