#include "main.h"
/**
 * _isalpha - checks for alphabet character
 *
 * @c: collect the character
 *
 * Return: (1) if c is a letter, lowercase or uppercase, otherwise (0)
 *
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);

}
