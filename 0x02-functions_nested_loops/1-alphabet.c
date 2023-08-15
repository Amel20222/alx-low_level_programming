#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
        	_putchar(letter);
        	letter++;
	}

	_putchar('\n');
}
