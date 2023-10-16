#include "main.h"
/**
 * _isdigit - check for digits between digits and character
 *
 * @c: parameter
 *
 * Return: (1) for true (0) false
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
