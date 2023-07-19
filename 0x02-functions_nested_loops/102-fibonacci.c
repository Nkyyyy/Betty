#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	long int Fibonacci[50];

	Fibonacci[0] = 1;
	Fibonacci[1] = 2;
	printf("%ld, %ld, ", Fibonacci[0], Fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
		if (i == 49)
		{
			printf("%ld\n", Fibonacci[i]);
		}
		else
		{
			printf("%ld, ", Fibonacci[i]);
		}
	}
	return (0);
}
