/**
 * main - Entry point
 *
 * Description: prints numbers
 *
 * Return: 0 Always (Success)
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i=0; i<10; i++)
	{
		putchar((i%10 + '0'));
	}
	putchar('\n');
	return (0);
}