#include <stdio.h>
/**
 * main - print all digits of base ten usin putchar
 *
 * Return: alway (0)
 *
 */
int main(void)
{
	int base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
