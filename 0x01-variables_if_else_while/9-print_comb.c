#include <stdio.h>



/**
 *main - Print single digit numbers in the formart
 *
 *Description: Numbers must be separated by , followed by a space
 *Numbers should be printed in ascending order
 *Return: Always(0) Success
 */


	int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
{
	putchar(i);
	}
	if (i != 57)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
