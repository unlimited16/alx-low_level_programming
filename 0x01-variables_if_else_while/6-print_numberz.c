#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all single digit of base 10 from 0
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

