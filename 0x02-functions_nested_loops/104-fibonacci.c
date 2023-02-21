#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	double a;

	double b;

	double c;

	int count;

	a = 1;
	b = 2;
	count = 2;

	printf("%lf, %lf", a, b);

	while (count < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lf", c);
		count++;
	}
	printf("\n");

	return (0);
}
