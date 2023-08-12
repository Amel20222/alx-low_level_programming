#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a';letter <= 'z';letter++)
	{
		if (letter != 'q' && letter != 'e' )
			putchar (letter);
	}
	putchar ('\n');

	return (0);
}
